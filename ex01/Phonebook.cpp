/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyong-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 15:37:28 by gyong-si          #+#    #+#             */
/*   Updated: 2024/09/12 16:00:26 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include <iomanip>
#include <string>
#include <sstream>

// Constructor
PhoneBook::PhoneBook(void) : _index(0)
{
	std::cout <<
		"--------------------------------------------------------------\n"
	<< std::endl;
	std::cout << GREEN
		"Welcome to Phonebook. You can save and read up to 8 contacts.\n"
		"You can use the following features. ADD, SEARCH and EXIT.\n"
	<< RESET << std::endl;
	std::cout <<
		"--------------------------------------------------------------\n"
		<< std::endl;
	addMockContacts();
}

// Destructor
PhoneBook::~PhoneBook(void)
{
	std::cout <<
		"--------------------------------------------------\n"
	<< std::endl;
	std::cout << GREEN
		"Phonebook is being deleted, all contacts are lost.\n"
		"Thank you for using Phonebook!\n"
	<< RESET << std::endl;
	std::cout <<
		"--------------------------------------------------\n"
	<< std::endl;
}

void	PhoneBook::addContact(void)
{
	std::string	firstName, lastName, nickname, phoneNumber, darkestSecret;

	while (true)
	{
		std::cout << "Enter first name: ";
		std::getline(std::cin, firstName);
		if (!firstName.empty())
			break;
		else
			std::cout << "First name cannot be empty." <<std::endl;
	}
	while (true)
	{
		std::cout << "Enter last name: ";
		std::getline(std::cin, lastName);
		if (!lastName.empty())
			break;
		else
			std::cout << "Last name cannot be empty." <<std::endl;
	}
	while (true)
	{
		std::cout << "Enter Nickname: ";
		std::getline(std::cin, nickname);
		if (!nickname.empty())
			break;
		else
			std::cout << "Nickname cannot be empty." <<std::endl;
	}
	while (true)
	{
		std::cout << "Enter Phone number: ";
		std::getline(std::cin, phoneNumber);
		if (!phoneNumber.empty())
			break;
		else
			std::cout << "Phone Number cannot be empty." <<std::endl;
	}
	while (true)
	{
		std::cout << "Enter darkest secret: ";
		std::getline(std::cin, darkestSecret);
		if (!darkestSecret.empty())
			break;
		else
			std::cout << "Darkest secret cannot be empty." <<std::endl;
	}
	contacts[this->_index % 8].setFirstName(firstName);
	contacts[this->_index % 8].setLastName(lastName);
	contacts[this->_index % 8].setNickname(nickname);
	contacts[this->_index % 8].setPhoneNumber(phoneNumber);
	contacts[this->_index % 8].setDarkestSecret(darkestSecret);
	std::cout << "Contact added at index: " << this->_index % 8 << std::endl;
	this->_index++;
}

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

// lets display the 4 columns first
void	PhoneBook::searchContact(void)
{
	const int	columnWidth = 10;
	int			i;
	int			index;
	int			n;
	std::string str;

	i = 0;
	// print out the headers
	std::cout << " ___________________________________________ " << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	// This will display all the 4 columns from all contacts
	while (i < 8)
	{
		//check if the contact exist
		if (!contacts[i].get_firstName().empty())
		{
			str = intToString(i);
			n = columnWidth - str.length();
			std::cout << "|" << add_space(n) << str;
			str = truncate(contacts[i].get_firstName(), columnWidth);
			n = columnWidth - str.length();
			std::cout << "|" << add_space(n) << str;
			str = truncate(contacts[i].get_lastName(), columnWidth);
			n = columnWidth - str.length();
			std::cout << "|" << add_space(n) << str;
			str = truncate(contacts[i].get_nickName(), columnWidth);
			n = columnWidth - str.length();
			std::cout << "|" << add_space(n) << str << "|" << std::endl;
		}
		i++;
	}
	std::cout << "Enter the index of the contact to view details: ";
	std::cin >> index;
	std::cin.ignore();
	if (index >= 0 && index < 8 && !contacts[index].get_firstName().empty())
	{
		std::cout << std::endl;
		std::cout << "First Name: " << contacts[index].get_firstName() << std::endl;
		std::cout << "Last Name: " << contacts[index].get_lastName() << std::endl;
		std::cout << "Nickname: " << contacts[index].get_nickName() << std::endl;
		std::cout << "Phone Number: " << contacts[index].get_phoneNum() << std::endl;
		std::cout << "Darkest Secret: " << contacts[index].get_darkestSecret() << std::endl;
		std::cout << std::endl;
	}
	else
		std::cout << "Invalid index. Please try again." << std::endl;
}

void	PhoneBook::addMockContacts(void)
{
	contacts[0].setFirstName("John");
	contacts[0].setLastName("Doe");
	contacts[0].setNickname("Johnny");
	contacts[0].setPhoneNumber("123456789");
	contacts[0].setDarkestSecret("Afraid of heights");

	contacts[1].setFirstName("Jane");
	contacts[1].setLastName("Doe");
	contacts[1].setNickname("Janey");
	contacts[1].setPhoneNumber("987654321");
	contacts[1].setDarkestSecret("Secret gamer");

	contacts[2].setFirstName("Alex");
	contacts[2].setLastName("Smith");
	contacts[2].setNickname("Al");
	contacts[2].setPhoneNumber("555123456");
	contacts[2].setDarkestSecret("Afraid of spiders");

	contacts[3].setFirstName("Matthew");
	contacts[3].setLastName("McDonalds");
	contacts[3].setNickname("Macs");
	contacts[3].setPhoneNumber("97873434");
	contacts[3].setDarkestSecret("FastFood Lover");

	contacts[4].setFirstName("Colonel");
	contacts[4].setLastName("Sanders");
	contacts[4].setNickname("FKD");
	contacts[4].setPhoneNumber("376768989");
	contacts[4].setDarkestSecret("Uses Frozen Chicken");

	contacts[5].setFirstName("Long John");
	contacts[5].setLastName("Silvers");
	contacts[5].setNickname("Fries");
	contacts[5].setPhoneNumber("872565478");
	contacts[5].setDarkestSecret("Food is okay");

	contacts[6].setFirstName("Burger");
	contacts[6].setLastName("King");
	contacts[6].setNickname("The King");
	contacts[6].setPhoneNumber("98754653");
	contacts[6].setDarkestSecret("Pies");

	contacts[7].setFirstName("Jared");
	contacts[7].setLastName("Leto");
	contacts[7].setNickname("Sub");
	contacts[7].setPhoneNumber("90876894");
	contacts[7].setDarkestSecret("Bread contains sugar");

	_index = 8;
}
