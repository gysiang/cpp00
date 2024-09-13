/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyong-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 11:11:08 by gyong-si          #+#    #+#             */
/*   Updated: 2024/09/13 09:26:19 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	pb1;
	std::string	str;

	while (str != "EXIT")
	{
		std::cout << "Enter a command" << std::endl;
		std::getline(std::cin, str);
		if (str == "ADD")
			pb1.addContact();
		else if (str == "SEARCH")
			pb1.searchContact();
		else if (str == "EXIT")
			break;
		else
			std::cout << "Invalid command. Please try again." << std::endl;
	}
	return (0);
}
