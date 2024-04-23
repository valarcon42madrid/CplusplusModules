/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Reader.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:17:47 by valarcon          #+#    #+#             */
/*   Updated: 2023/01/16 13:17:49 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef READER_HPP
# define READER_HPP

# include <iostream>
# include <fstream>
# include <sstream>

class Sed
{
private:
	static std::string strReplace(std::string const &line, std::string const &search, std::string const &replace);
public:
	Sed();
	virtual ~Sed();

	static void replace(std::string const &filename, std::string const &search, std::string const &replace);
};

#endif
