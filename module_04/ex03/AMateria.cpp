/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 18:15:42 by jhur              #+#    #+#             */
/*   Updated: 2020/08/24 18:34:52 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(){}
AMateria::~AMateria(){}
AMateria::AMateria(std::string const &type)
{
	this->_xp = 0;
	this->_type = type;
}

AMateria::AMateria(const AMateria& copy)
{
	*this = copy;
}

AMateria			&AMateria::operator=(const  AMateria &ref)
{
	this->_xp = ref._xp;
	this->_type = ref._type;
	return (*this);
}

std::string	const	&AMateria::getType() const
{
	return (this->_type);
}

unsigned int		AMateria::getXP() const
{
	return (this->_xp);
}

void				AMateria::use(ICharacter& target)
{
	this->_xp += 10;
}
