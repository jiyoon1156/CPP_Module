/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 13:28:51 by jhur              #+#    #+#             */
/*   Updated: 2020/08/21 09:53:42 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "Default ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	this->HitPoints = 100;
	this->MaxHitPoints = 100;
	this->EnergyPoints = 50;
	this->MaxEnergyPoints = 50;
	this->Level = 1;
	this->Name = name;
	this->MeleeAttackDamage = 20;
	this->RangedAttackDamage = 15;
	this->GunAttackDamage = 40;
	this->CarAttackDamage = 50;
	this->BombAttackDamage = 60;
	this->ArmorDamageReduction = 3;
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
	std::cout << "A copy constructor of ScavTrap is called." << std::endl;
	*this = copy;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &ref)
{
	this->HitPoints = ref.HitPoints;
	this->MaxHitPoints = ref.MaxHitPoints;
	this->EnergyPoints = ref.EnergyPoints;
	this->MaxEnergyPoints = ref.MaxEnergyPoints;
	this->Level = ref.Level;
	this->Name = ref.Name;
	this->MeleeAttackDamage = ref.MeleeAttackDamage;
	this->RangedAttackDamage = ref.RangedAttackDamage;
	this->GunAttackDamage = ref.GunAttackDamage;
	this->CarAttackDamage = ref.CarAttackDamage;
	this->BombAttackDamage = ref.BombAttackDamage;
	this->ArmorDamageReduction = ref.ArmorDamageReduction;
	return (*this);
}

void	ScavTrap::RangedAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << this->Name << " attacks " << target << " at range, causing "
	<< this->RangedAttackDamage << " points of damage !" << std::endl;
}

void	ScavTrap::MeleeAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << this->Name << " attacks " << target << " at melee, causing "
	<< this->MeleeAttackDamage << " points of damage !" << std::endl;
}

void	ScavTrap::GunAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << this->Name << " attacks " << target << " by gun, causing "
	<< this->GunAttackDamage << " points of damage !" << std::endl;
}

void	ScavTrap::CarAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << this->Name << " attacks " << target << " by car, causing "
	<< this->CarAttackDamage << " points of damage !" << std::endl;
}

void	ScavTrap::BombAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << this->Name << " attacks " << target << " by bomb, causing "
	<< this->BombAttackDamage << " points of damage !" << std::endl;
}

void	ScavTrap::TakeDamage(unsigned int amount)
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

void	ScavTrap::BeRepaired(unsigned int amount)
{
	if	((this->EnergyPoints + amount) <= this->MaxEnergyPoints)
	{
		this->EnergyPoints += amount;
		std::cout << amount << " repaired, current energy points are " << this->EnergyPoints << std::endl;
	}
	else
		this->EnergyPoints = this->MaxEnergyPoints;
}

void	ScavTrap::challengeNewcomer(std::string const &target)
{
	int					i;
	std::random_device	rd;

	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> dis(0, 3);
	i = dis(gen);
	std::string challenge[4] =
	{
		"rock scissor paper",
		"don't laugh for 2 minutes",
		"writing poem",
		"read 1 book in an hour"
	};
	std::cout << target << " accepted " << challenge[i] << " challenge" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}
