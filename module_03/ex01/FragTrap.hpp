/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 09:47:03 by jhur              #+#    #+#             */
/*   Updated: 2020/08/21 09:46:14 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
#include <iostream>
#include <string>
#include <ctime>
#include <random>

class FragTrap
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
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap& copy);
		FragTrap &operator=(const FragTrap &ref);
		void	RangedAttack(std::string const &target);
		void	MeleeAttack(std::string const &target);
		void	GunAttack(std::string const &target);
		void	CarAttack(std::string const &target);
		void	BombAttack(std::string const &target);
		void	TakeDamage(unsigned int amount);
		void	BeRepaired(unsigned int amount);
		void	vaulthunter_dot_exe(std::string const &target);
		~FragTrap();
};

#endif
