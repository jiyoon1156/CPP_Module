/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 13:56:08 by jhur              #+#    #+#             */
/*   Updated: 2020/08/20 15:20:16 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// ClapTrap::ClapTrap()
// {
// 	std::cout << "Claptrap constructor called" << std::endl;
// }

ClapTrap::ClapTrap(unsigned int	HitP,
				unsigned int	MaxHitP,
				unsigned int	EP,
				unsigned int	MaxEP,
				unsigned int	lv,
				std::string		name,
				unsigned int	MADamage,
				unsigned int	RADamage,
				unsigned int	GADamage,
				unsigned int	CADamage,
				unsigned int	BADamage,
				unsigned int	ADReduction)
: HitPoints(HitP), MaxHitPoints(MaxHitP), EnergyPoints(EP), MaxEnergyPoints(MaxEP),
Level(lv), Name(name), MeleeAttackDamage(MADamage), RangedAttackDamage(RADamage),
GunAttackDamage(GADamage), CarAttackDamage(CADamage), BombAttackDamage(BADamage), ArmorDamageReduction(ADReduction)
{
	std::cout << "Claptrap constructor called" << std::endl;
	(void)HitPoints;
	(void)MaxHitPoints;
	(void)Level;
}

void	ClapTrap::RangedAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << this->Name << " attacks " << target << " at range, causing "
	<< this->RangedAttackDamage << " points of damage !" << std::endl;
}

void	ClapTrap::MeleeAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << this->Name << " attacks " << target << " at melee, causing "
	<< this->MeleeAttackDamage << " points of damage !" << std::endl;
}

void	ClapTrap::GunAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << this->Name << " attacks " << target << " by gun, causing "
	<< this->GunAttackDamage << " points of damage !" << std::endl;
}

void	ClapTrap::CarAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << this->Name << " attacks " << target << " by car, causing "
	<< this->CarAttackDamage << " points of damage !" << std::endl;
}

void	ClapTrap::BombAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << this->Name << " attacks " << target << " by bomb, causing "
	<< this->BombAttackDamage << " points of damage !" << std::endl;
}

void	ClapTrap::TakeDamage(unsigned int amount)
{
	if (this->EnergyPoints == 0)
	{
		std::cout << "It's already dead" << std::endl;
		return ;
	}
	if (this->EnergyPoints > amount - this->ArmorDamageReduction)
	{
		this->EnergyPoints -= (amount - this->ArmorDamageReduction);
		std::cout << "Energy points : " << this->EnergyPoints << std::endl;
	}
	else
	{
		this->EnergyPoints = 0;
		std::cout << "Energy points : " << this->EnergyPoints << " and it's dead" << std::endl;
		return ;
	}

}

void	ClapTrap::BeRepaired(unsigned int amount)
{
	if	((this->EnergyPoints + amount) <= this->MaxEnergyPoints)
	{
		this->EnergyPoints += amount;
		std::cout << amount << " repaired, current energy points are " << this->EnergyPoints << std::endl;
	}
	else
		this->EnergyPoints = this->MaxEnergyPoints;
}

unsigned int	ClapTrap::getEnergy(void)
{
	return (this->EnergyPoints);
}

void			ClapTrap::decreaseEnergy(void)
{
	this->EnergyPoints -= 25;
}

std::string		ClapTrap::getName(void)
{
	return (this->Name);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Claptrap destructor called" << std::endl;
}
