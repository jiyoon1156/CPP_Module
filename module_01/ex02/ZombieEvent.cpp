/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 13:42:38 by jhur              #+#    #+#             */
/*   Updated: 2020/08/12 17:27:00 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{}

void	ZombieEvent::setZombieType(std::string type)
{
	this->store_type = type;
}

Zombie	*ZombieEvent::newZombie(std::string name)
{
	return(new Zombie(name, store_type));
}

Zombie	*ZombieEvent::randomChump(void)
{
	std::string random_name[5] = {"z1", "z2", "z3", "z4", "z5"};
	Zombie		*rand_zombie;
	
	//rand() % 5 //0부터 4까지의 숫자 중 하나
	rand_zombie = new Zombie(random_name[rand() % 5], store_type);
	rand_zombie->announce();
	return (rand_zombie);
}

ZombieEvent::~ZombieEvent()
{}
