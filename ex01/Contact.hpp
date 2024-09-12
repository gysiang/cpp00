/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyong-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 15:34:22 by gyong-si          #+#    #+#             */
/*   Updated: 2024/09/10 14:38:25 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class Contact
{
	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickName;
		std::string	_phoneNumber;
		std::string	_darkestSecret;

	public:
		// Getters
		std::string	get_firstName(void) const;
		std::string	get_lastName(void)	const;
		std::string	get_nickName(void)	const;
		std::string	get_phoneNum(void)	const;
		std::string	get_darkestSecret(void)	const;
		// Setters
		void		setFirstName(const std::string &str);
		void		setLastName(const std::string &str);
		void		setNickname(const std::string &str);
		void		setPhoneNumber(const std::string &str);
		void		setDarkestSecret(const std::string &str);
};

#endif
