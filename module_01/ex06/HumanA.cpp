/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 14:51:06 by jhur              #+#    #+#             */
/*   Updated: 2020/08/15 16:25:20 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &club) : _weapon(club)
{
	this->_name = name;
}

HumanA::~HumanA()
{}

void	HumanA::attack(void)
{
	std::cout << this->_name << " attacks with his " << _weapon.getType() << std::endl;
}

