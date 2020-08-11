/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 11:58:31 by jhur              #+#    #+#             */
/*   Updated: 2020/08/11 18:20:30 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact()
{
	this->fields[0] = "first name";
	this->fields[1] = "last name";
	this->fields[2] = "nickname";
	this->fields[3] = "login";
	this->fields[4] = "postal address";
	this->fields[5] = "email address";
	this->fields[6] = "phonebook number";
	this->fields[7] = "birthday date";
	this->fields[8] = "favorite meal";
	this->fields[9] = "underwear color";
	this->fields[10] = "darkest secret";
}

Contact::~Contact()
{}

void	Contact::get_inputs(void)
{
	for(int i = 0; i < 11; i++)
	{
		std::cout << this->fields[i] << " : ";
		std::getline(std::cin, inputs[i]);
	}
}

void	Contact::print_all(void)
{
	for(int i = 0; i < 11; i++)
		std::cout << this->fields[i] << " : " << this->inputs[i] << std::endl;
}

void	Contact::print_overview(int i)
{
	std::cout << "|" << std::setw(10) << i << "|";
	for (int j = 0; j < 3; j++)
	{
		if (this->inputs[j].length() > 10)
			this->inputs[j].erase(9, this->inputs[j].length()).append(".");
		std::cout << std::setw(10) << this->inputs[j] << "|";
	}
	std::cout << std::endl;
}
