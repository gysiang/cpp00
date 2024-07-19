/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook_class.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyong-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 11:24:53 by gyong-si          #+#    #+#             */
/*   Updated: 2024/07/19 15:07:22 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "Contact.h"

class PhoneBook
{
private:
	Contact contacts[8];
	int	current_index;
	int	total_contacts;

public:
	PhoneBook(): current_index(0), total_contacts(0) {}





}

#endif
