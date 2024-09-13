/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook_Utils.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyong-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 14:22:37 by gyong-si          #+#    #+#             */
/*   Updated: 2024/09/13 09:20:52 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <sstream>

std::string	truncate(const std::string &str, size_t width)
{
	if (str.length() > width)
		return (str.substr(0, width - 1) + '.');
	return (str);
}

// returns a string with n number of spaces
std::string add_space(int n)
{
	if (n <= 0)
		return "";
	return (std::string(n, ' '));
}

std::string intToString(int num)
{
	std::stringstream ss;

	ss << num;
	return (ss.str());
}
