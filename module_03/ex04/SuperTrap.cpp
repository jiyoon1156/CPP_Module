/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 15:28:23 by jhur              #+#    #+#             */
/*   Updated: 2020/08/21 13:36:57 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap()
{
	std::cout << "Default SuperTrap constructor called" << std::endl;
}

SuperTrap::SuperTrap(std::string name)
: ClapTrap(100, 100, 120, 120, 1, name, 60, 20, 40, 50, 60, 5)
{
	std::cout << "SuperTrap constructor called" << std::endl;
}

void	SuperTrap::rangedAttack(std::string const &target)
{
	FragTrap::RangedAttack(target);
}

void	SuperTrap::meleeAttack(std::string const &target)
{
	NinjaTrap::MeleeAttack(target);
}
SuperTrap::~SuperTrap()
{
	std::cout << "SuperTrap destructor called" << std::endl;
}
