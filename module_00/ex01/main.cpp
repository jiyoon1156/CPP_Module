/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 11:36:39 by jhur              #+#    #+#             */
/*   Updated: 2020/08/19 22:44:14 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include "Phonebook.hpp"

int main(void)
{
	Contact contact;
	Phonebook phonebook;
	std::string input;

	while (1)
	{
		std::cout << "======ADD, SEARCH, EXIT======" << std::endl;
		std::getline(std::cin, input);
		if (!input.compare("ADD"))
		{
			phonebook.add_contact();
		}
		else if (!input.compare("SEARCH"))
		{
			phonebook.current_status();
		}
		else if (!input.compare("EXIT"))
		{
			std::cout << "========EXIT========";
			break ;
		}
		else if (std::cin.eof()) //ctrl + D
			break ;
	}
	return (0);
}
