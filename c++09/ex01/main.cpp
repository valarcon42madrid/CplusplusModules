/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 12:05:46 by valarcon          #+#    #+#             */
/*   Updated: 2023/04/18 12:05:49 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv)
{
    RPN rpn;
    rpn.checker(argc, argv);
    std::stack<int> s;
    std::string line = argv[1];
    std::string::iterator it = line.begin();
    std::string num = "";
    while (it != line.end())
    {
		char t = *it;
        if (t == ' ')
        {
            if (!num.empty())
            {
                s.push(std::stoi(num));
                num = "";
            }
        }
        else if (isdigit(t))
        {
            if (!num.empty())
            {
                s.push(std::stoi(num));
                num = "";
            }
            num += t;
        }
        else
        {
            if (s.size() < 2)
            {
                std::cerr << "Error" << std::endl;
                return 1;
            }
            int first = s.top();
            s.pop();
            int second = s.top();
            s.pop();
            if (first == 0 && rpn.token == '/')
            {
                std::cerr << "Error: Divide by 0" << std::endl;
                exit(1);
            }
            switch (t)
            {
                case '+':
                    s.push(second + first);
                    break;
                case '-':
                    s.push(second - first);
                    break;
                case '*':
                    s.push(second * first);
                    break;
                case '/':
                    s.push(second / first);
                    break;
                default:
                    std::cerr << "Error: Invalid Operator" << std::endl;
                return (1);
            }
        }
        it++;
    }
    if (s.size() > 0)
        std::cout << s.top() << std::endl;
    else
    {
        std::cerr << "Error" << std::endl;
        exit(1);
    }
    return 0;
}
