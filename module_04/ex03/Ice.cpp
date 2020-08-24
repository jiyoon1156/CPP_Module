/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 19:51:14 by jhur              #+#    #+#             */
/*   Updated: 2020/08/24 20:15:31 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice"){}
Ice::~Ice(){}

Ice::Ice(const Ice& copy) : AMateria("ice")
{
	*this = copy;
}

Ice			&Ice::operator=(const  Ice &ref)
{
	this->AMateria::operator=(ref);
	return (*this);
}

void		Ice::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

AMateria*	Ice::clone() const
{
	return (new Ice);
}
