/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/23 15:45:44 by jhur              #+#    #+#             */
/*   Updated: 2020/08/23 18:54:18 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle()
: AWeapon("Plasma Rifle", 5, 21)
{}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &copy)
{
	*this = copy;
}

PlasmaRifle	&PlasmaRifle::operator=(const PlasmaRifle &ref)
{
	AWeapon::copy(ref);
	return (*this);
}

void	PlasmaRifle::attack(void) const
{
	std::cout <<  "* piouuu piouuu piouuu *" << std::endl;
}

PlasmaRifle::~PlasmaRifle()
{}
