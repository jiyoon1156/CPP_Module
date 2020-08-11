/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 13:07:56 by jhur              #+#    #+#             */
/*   Updated: 2020/08/11 18:12:31 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phonebook::Phonebook() : cnt(0)
{}

Phonebook::~Phonebook()
{}

void	Phonebook::searching(void)
{
	std::string	search_idx;
	int			s_idx;
	
	std::getline(std::cin, search_idx);
	if (std::cin.eof())
	{
		std::cin.clear();
		exit(0);
	}
	s_idx = std::stoi(search_idx);
	if (s_idx < 0 || s_idx > 7 || s_idx > this->cnt - 2)
	{
		std::cout << "there's no such index" << std::endl;
		return ;
	}
	this->contact[s_idx].print_all();

}

void	Phonebook::current_status(void)
{
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
	for (int i = 0; i < this->cnt; i++)
		this->contact[i].print_overview(i);
	std::cout << "|-------------------------------------------|" << std::endl;
	searching();
}

void	Phonebook::add_contact(void)
{
	if (this->cnt >= 8)
	{
		std::cout << "phonebook is full" << std::endl;
		return ;
	}
	this->contact[this->cnt].get_inputs();
	this->cnt++;
	std::cout << "=======!!!!ADDED!!!!=======" << std::endl;
}
