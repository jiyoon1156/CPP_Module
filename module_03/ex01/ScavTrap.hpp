/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 13:28:54 by jhur              #+#    #+#             */
/*   Updated: 2020/08/21 09:52:58 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCANTRAP_HPP
# define SCANTRAP_HPP

#include <iostream>
#include <string>
#include <ctime>
#include <random>

class ScavTrap
{
	private:
		unsigned int	HitPoints;
		unsigned int	MaxHitPoints;
		unsigned int	EnergyPoints;
		unsigned int	MaxEnergyPoints;
		unsigned int	Level;
		std::string		Name;
		unsigned int	MeleeAttackDamage;
		unsigned int	RangedAttackDamage;
		unsigned int	GunAttackDamage;
		unsigned int	CarAttackDamage;
		unsigned int	BombAttackDamage;
		unsigned int	ArmorDamageReduction;
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &copy);
		ScavTrap &operator=(const ScavTrap &ref);
		void	RangedAttack(std::string const &target);
		void	MeleeAttack(std::string const &target);
		void	GunAttack(std::string const &target);
		void	CarAttack(std::string const &target);
		void	BombAttack(std::string const &target);
		void	TakeDamage(unsigned int amount);
		void	BeRepaired(unsigned int amount);
		void	challengeNewcomer(std::string const &target);
		~ScavTrap();
};

#endif
