/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 20:14:01 by jhur              #+#    #+#             */
/*   Updated: 2020/08/24 20:16:10 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("Cure"){}
Cure::~Cure(){}

Cure::Cure(const Cure& copy) : AMateria("Cure")
{
	*this = copy;
}

Cure		&Cure::operator=(const  Cure &ref)
{
	this->AMateria::operator=(ref);
	return (*this);
}

void		Cure::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

AMateria*	Cure::clone() const
{
	return (new Cure);
}
