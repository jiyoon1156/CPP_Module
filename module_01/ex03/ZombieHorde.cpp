/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 10:41:33 by jhur              #+#    #+#             */
/*   Updated: 2020/08/13 12:58:12 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N)
{
	std::string random_name[5] = {"z1", "z2", "z3", "z4", "z5"};

	this->n = N;
	random_zombie = new Zombie[this->n];
	for(int i = 0; i < n; i++)
	{
		random_zombie[i].setName(random_name[rand() % 5]);
		random_zombie[i].setType("random");
		random_zombie[i].announce();
	}
}

ZombieHorde::~ZombieHorde()
{
	delete []random_zombie;
	std::cout << "All the zombies are killed" << std::endl;
}
