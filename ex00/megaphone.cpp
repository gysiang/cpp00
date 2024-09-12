/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyong-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 12:57:16 by gyong-si          #+#    #+#             */
/*   Updated: 2024/07/18 13:09:25 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <algorithm>

int	main(int ac, char **av)
{
	int	i;

	i = 1;
	if (ac < 2)
	{
		std::cerr << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (1);
	}
	std::string input;
	while (i < ac)
	{
		input += av[i];
		if (i < ac - 1)
			input += " ";
		i++;
	}
	std::transform(input.begin(), input.end(), input.begin(), ::toupper);
	std::cout << input << std::endl;
	return (0);
}
