/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 12:05:46 by valarcon          #+#    #+#             */
/*   Updated: 2024/04/27 13:04:05 by valarcon         ###   ########.fr       */
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
                std::cerr << "Error: No hay suficientes operandos en la pila." << std::endl;
                return 1;
            }
            int first = s.top();
            s.pop();
            int second = s.top();
            s.pop();
            if (first == 0 && rpn.token == '/')
            {
                std::cerr << "Error: División por cero." << std::endl;
                return 1;
            }
            switch (t)
            {
                case '+':
                    if ((second > 0 && first > INT_MAX - second) || (second < 0 && first < INT_MIN - second)) {
                        std::cerr << "Error: Desbordamiento de suma." << std::endl;
                        return 1;
                    }
                    s.push(second + first);
                    break;
                case '-':
                    if ((second > 0 && first < INT_MIN + second) || (second < 0 && first > INT_MAX + second)) {
                        std::cerr << "Error: Desbordamiento de resta." << std::endl;
                        return 1;
                    }
                    s.push(second - first);
                    break;
                case '*':
                    if ((first != 0 && second != 0 && first > INT_MAX / second) || (first != 0 && second != 0 && first < INT_MIN / second)) {
                        std::cerr << "Error: Desbordamiento de multiplicación." << std::endl;
                        return 1;
                    }
                    s.push(second * first);
                    break;
                case '/':
                    s.push(second / first);
                    break;
                default:
                    std::cerr << "Error: Operador inválido." << std::endl;
                    return 1;
            }
        }
        it++;
    }
    if (s.size() == 1) {
        std::cout << "Resultado: " << s.top() << std::endl;
        return 0;
    } else {
        std::cerr << "Error: Expresión mal formada." << std::endl;
        return 1;
    }
}
