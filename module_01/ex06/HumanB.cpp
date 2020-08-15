/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 14:51:12 by jhur              #+#    #+#             */
/*   Updated: 2020/08/15 16:45:08 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->_name = name;
}

HumanB::~HumanB()
{}

void	HumanB::attack(void)
{
	std::cout << this->_name << " attacks with his " <<  this->_weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &club)
{
	this->_weapon = &club;
}
