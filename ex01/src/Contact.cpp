/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyong-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 11:16:32 by gyong-si          #+#    #+#             */
/*   Updated: 2024/09/13 09:10:26 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Contact.hpp"

std::string	Contact::get_firstName(void) const
{
	return (this->_firstName);
}

std::string	Contact::get_lastName(void) const
{
	return (this->_lastName);
}

std::string	Contact::get_nickName(void) const
{
	return (this->_nickName);
}

std::string Contact::get_phoneNum(void) const
{
	return (this->_phoneNumber);
}

std::string Contact::get_darkestSecret(void) const
{
	return (this->_darkestSecret);
}

void	Contact::setFirstName(const std::string &str)
{
	this->_firstName = str;
}

void	Contact::setLastName(const std::string &str)
{
	this->_lastName = str;
}

void	Contact::setNickname(const std::string &str)
{
	this->_nickName = str;
}

void	Contact::setPhoneNumber(const std::string &str)
{
	this->_phoneNumber = str;
}

void	Contact::setDarkestSecret(const std::string &darkestSecret)
{
	this->_darkestSecret = darkestSecret;
}
