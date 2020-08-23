/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/23 15:59:15 by jhur              #+#    #+#             */
/*   Updated: 2020/08/23 18:53:08 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist()
: AWeapon("Power Fist", 8, 50)
{}

PowerFist::PowerFist(const PowerFist &copy)
{
	*this = copy;
}

PowerFist	&PowerFist::operator=(const PowerFist &ref)
{
	AWeapon::copy(ref);
	return (*this);
}

void	PowerFist::attack(void) const
{
	std::cout <<  "* pschhh... SBAM! *" << std::endl;
}

PowerFist::~PowerFist()
{}
