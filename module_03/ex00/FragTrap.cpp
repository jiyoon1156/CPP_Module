/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 09:46:59 by jhur              #+#    #+#             */
/*   Updated: 2020/08/21 09:54:12 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "Default FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	this->HitPoints = 100;
	this->MaxHitPoints = 100;
	this->EnergyPoints = 100;
	this->MaxEnergyPoints = 100;
	this->Level = 1;
	this->Name = name;
	this->MeleeAttackDamage = 30;
	this->RangedAttackDamage = 20;
	this->GunAttackDamage = 40;
	this->CarAttackDamage = 50;
	this->BombAttackDamage = 60;
	this->ArmorDamageReduction = 5;
	std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& copy)
{
	std::cout << "A copy constructor of FragTrap is called." << std::endl;
	*this = copy;
}

FragTrap	&FragTrap::operator=(const FragTrap &ref)
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

void	FragTrap::RangedAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << this->Name << " attacks " << target << " at range, causing "
	<< this->RangedAttackDamage << " points of damage !" << std::endl;
}

void	FragTrap::MeleeAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << this->Name << " attacks " << target << " at melee, causing "
	<< this->MeleeAttackDamage << " points of damage !" << std::endl;
}

void	FragTrap::GunAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << this->Name << " attacks " << target << " by gun, causing "
	<< this->GunAttackDamage << " points of damage !" << std::endl;
}

void	FragTrap::CarAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << this->Name << " attacks " << target << " by car, causing "
	<< this->CarAttackDamage << " points of damage !" << std::endl;
}

void	FragTrap::BombAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << this->Name << " attacks " << target << " by bomb, causing "
	<< this->BombAttackDamage << " points of damage !" << std::endl;
}

void	FragTrap::TakeDamage(unsigned int amount)
{
	//0 아래로 떨어지면 안된다.
	//armor damage reduction도 고려
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

void	FragTrap::BeRepaired(unsigned int amount)
{
	//max 에너지 포인트를 넘기면 안된다.
	if	((this->EnergyPoints + amount) <= this->MaxEnergyPoints)
	{
		this->EnergyPoints += amount;
		std::cout << amount << " repaired, current energy points are " << this->EnergyPoints << std::endl;
	}
	else
		this->EnergyPoints = this->MaxEnergyPoints;
}

void	FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	int					i;
	std::random_device	rd; //시드(무작위로 정해진 첫번째 수)값을 얻기 위한 생성

	//random_device를 통해 난수 생성 엔진 초기화
	std::mt19937 gen(rd());
	//0-4까지 균등하게 나타나는 나수열을 생성하기 위해 균등 분포 정의
	std::uniform_int_distribution<int> dis(0, 4);
	i = dis(gen);
	if (this->EnergyPoints < 25)
		std::cout << "Energy points have to be over 25" << std::endl;
	else
	{
		this->EnergyPoints -= 25;
		if (i == 0)
			RangedAttack(target);
		else if (i == 1)
			MeleeAttack(target);
		else if (i == 2)
			GunAttack(target);
		else if (i == 3)
			CarAttack(target);
		else
			BombAttack(target);
	}

}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}
