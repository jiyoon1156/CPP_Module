/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 13:56:11 by jhur              #+#    #+#             */
/*   Updated: 2020/08/21 13:30:40 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class	ClapTrap
{
	protected:
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
		ClapTrap();
		ClapTrap(unsigned int	HitPoints,
				unsigned int	MaxHitPoints,
				unsigned int	EnergyPoints,
				unsigned int	MaxEnergyPoints,
				unsigned int	Level,
				std::string		Name,
				unsigned int	MeleeAttackDamage,
				unsigned int	RangedAttackDamage,
				unsigned int	GunAttackDamage,
				unsigned int	CarAttackDamage,
				unsigned int	BombAttackDamage,
				unsigned int	ArmorDamageReduction);
		ClapTrap(const ClapTrap &copy);
		ClapTrap &operator=(const ClapTrap &ref);
		void			RangedAttack(std::string const &target);
		void			MeleeAttack(std::string const &target);
		void			GunAttack(std::string const &target);
		void			CarAttack(std::string const &target);
		void			BombAttack(std::string const &target);
		void			TakeDamage(unsigned int amount);
		void			BeRepaired(unsigned int amount);
		unsigned int	getEnergy(void);
		void			decreaseEnergy(void);
		void			copy(const ClapTrap &ref);
		std::string		getName(void);
		~ClapTrap();
};

#endif
