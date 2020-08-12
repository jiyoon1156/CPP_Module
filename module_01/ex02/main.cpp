/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 13:51:36 by jhur              #+#    #+#             */
/*   Updated: 2020/08/12 18:04:59 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int main()
{
	ZombieEvent crazy;
	ZombieEvent broken;
	ZombieEvent random;
	
	crazy.setZombieType("crazy");
	Zombie *crazy_zombie = crazy.newZombie("zom1");
	crazy_zombie->announce();

	broken.setZombieType("broken");
	Zombie *broken_zombie = broken.newZombie("zom2");
	broken_zombie->announce();

	random.setZombieType("frustrated");
	Zombie *rand_zombie = random.randomChump();

	std::cout << "Zombies are all killed" << std::endl;
	delete(crazy_zombie);
	delete(broken_zombie);
	delete(rand_zombie);
	return (0);
}
