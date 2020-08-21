/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 09:47:06 by jhur              #+#    #+#             */
/*   Updated: 2020/08/20 13:09:34 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

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
	a.TakeDamage(130);
}
