/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 09:47:06 by jhur              #+#    #+#             */
/*   Updated: 2020/08/20 15:23:00 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	std::cout << "===============FragTrap================" << std::endl;
	FragTrap a("FRAGTRAP!");
	std::cout << "===============Take Damage================" << std::endl;
	a.TakeDamage(30);
	a.TakeDamage(30);
	a.TakeDamage(30);
	a.TakeDamage(30);
	a.TakeDamage(30);
	a.TakeDamage(30);
	std::cout << "===============Be Repaired================" << std::endl;
	a.BeRepaired(20);
	a.BeRepaired(20);
	a.BeRepaired(20);
	std::cout << "===============VaultHunter================" << std::endl;
	a.vaulthunter_dot_exe("someone");
	a.vaulthunter_dot_exe("someone");
	a.vaulthunter_dot_exe("someone");
	a.vaulthunter_dot_exe("someone");
	a.TakeDamage(110);

	std::cout << "===============ScavTrap================" << std::endl;
	ScavTrap b("SCAVTRAP!");
	std::cout << "===============Take Damage================" << std::endl;
	b.TakeDamage(30);
	b.TakeDamage(30);
	b.TakeDamage(30);
	b.TakeDamage(30);
	b.TakeDamage(30);
	b.TakeDamage(30);
	std::cout << "===============Be Repaired================" << std::endl;
	b.BeRepaired(20);
	b.BeRepaired(20);
	b.BeRepaired(20);
	std::cout << "===============Challenge!================" << std::endl;
	b.challengeNewcomer("someone2");
	b.challengeNewcomer("someone2");

	std::cout << "===============Ninja Constructor================" << std::endl;
	NinjaTrap c("NinjaTrap!");
	std::cout << "===============Take Damage================" << std::endl;
	c.TakeDamage(30);
	c.TakeDamage(30);
	c.TakeDamage(30);
	c.TakeDamage(30);
	c.TakeDamage(30);
	c.TakeDamage(30);
	std::cout << "===============Be Repaired================" << std::endl;
	c.BeRepaired(20);
	c.BeRepaired(20);
	c.BeRepaired(20);
	std::cout << "===============NinjaShoeBox!================" << std::endl;
	c.ninjaShoebox(a);
	c.ninjaShoebox(b);
	std::cout << "===============Destructor================" << std::endl;
}
