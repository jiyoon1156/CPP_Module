/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/23 15:31:41 by jhur              #+#    #+#             */
/*   Updated: 2020/08/23 18:25:37 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon()
{}

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
{
	this->_name = name;
	this->_apcost = apcost;
	this->_damage = damage;
}

AWeapon::AWeapon(const AWeapon &copy)
{
	*this = copy;
}

AWeapon	&AWeapon::operator=(const AWeapon &ref)
{
	this->_name = ref._name;
	this->_apcost = ref._apcost;
	this->_damage = ref._damage;
	return (*this);
}

std::string	AWeapon::getName(void) const
{
	return (this->_name);
}

int			AWeapon::getAPCost(void) const
{
	return (this->_apcost);
}

int			AWeapon::getDamage(void) const
{
	return (this->_damage);
}

void		AWeapon::copy(AWeapon const &ref)
{
	this->_name = ref._name;
	this->_apcost = ref._apcost;
	this->_damage = ref._damage;
}

AWeapon::~AWeapon()
{}
