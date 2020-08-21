/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 09:47:06 by jhur              #+#    #+#             */
/*   Updated: 2020/08/21 13:23:09 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "SuperTrap.hpp"

int main()
{
	std::cout << "===============Constructor================" << std::endl;
	SuperTrap c("S");
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
	std::cout << "===============SUPERSUPER!================" << std::endl;
	c.vaulthunter_dot_exe("someone3");
	std::cout << "===============Destructor================" << std::endl;
}
