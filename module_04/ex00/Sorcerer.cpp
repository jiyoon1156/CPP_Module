/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 15:33:25 by jhur              #+#    #+#             */
/*   Updated: 2020/08/21 17:30:37 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer()
{}

Sorcerer::Sorcerer(std::string name, std::string title)
{
	this->_name = name;
	this->_title = title;
}

Sorcerer::Sorcerer(const Sorcerer &copy)
{
	*this = copy;
}

Sorcerer	&Sorcerer::operator=(const Sorcerer &ref)
{
	this->_name = ref._name;
	this->_title = ref._title;
	return (*this);
}

void	Sorcerer::birth(void)
{
	std::cout << this->_name << ", " << this->_title << ", " << "is born!" << std::endl;
}

void	Sorcerer::death(void)
{
	std::cout << this->_name << ", " << this->_title << ", " << "is dead. Consequences will never be the same!" << std::endl;
}

void	Sorcerer::introducing(void)
{
	std::cout << "I am " << this->_name << ", " << this->_title << ", " << "and I like ponies!" << std::endl;
}

Sorcerer::~Sorcerer()
{}
