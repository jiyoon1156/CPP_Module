/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 15:33:25 by jhur              #+#    #+#             */
/*   Updated: 2020/08/23 15:06:33 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer()
{}

Sorcerer::Sorcerer(std::string name, std::string title)
{
	this->_name = name;
	this->_title = title;
	std::cout << this->_name << ", " << this->_title << ", " << "is born!" << std::endl;
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

std::string	Sorcerer::introducing(void) const
{
	std::string intro;

	intro = "I am " + this->_name + ", " + this->_title + ", " + "and I like ponies!" + '\n';
	return (intro);
}

void		Sorcerer::polymorph(Victim const &victim) const
{
	victim.getPolymorphed();
}

std::ostream &operator<<(std::ostream &out, Sorcerer const &sorcerer)
{
	return (out << sorcerer.introducing());
}

Sorcerer::~Sorcerer()
{
	std::cout << this->_name << ", " << this->_title << ", " << "is dead. Consequences will never be the same!" << std::endl;
}
