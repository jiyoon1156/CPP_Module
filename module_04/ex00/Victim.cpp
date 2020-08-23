/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/23 13:52:29 by jhur              #+#    #+#             */
/*   Updated: 2020/08/23 15:06:46 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim()
{}

Victim::Victim(std::string name)
{
	this->_name = name;
	std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl;
}

Victim::Victim(const Victim &copy)
{
	*this = copy;
}

Victim		&Victim::operator=(const Victim &ref)
{
	this->_name = ref._name;
	return (*this);
}

std::string	Victim::introducing(void) const
{
	std::string intro;

	intro = "I am " + this->_name + ", and I like otters!" + '\n';
	return (intro);
}

void		Victim::getPolymorphed(void) const
{
	std::cout << this->_name << " has been turned into a cute little sheep!" << std::endl;
}

std::string	Victim::getName(void) const
{
	return (this->_name);
}

void 		Victim::copy(Victim const &ref)
{
	this->_name = ref._name;
}

std::ostream &operator<<(std::ostream &out, Victim const &victim)
{
	return (out << victim.introducing());
}

Victim::~Victim()
{
	std::cout << "Victim " << this->_name << " just died for no apparent reason!" << std::endl;
}
