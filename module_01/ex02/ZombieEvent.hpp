/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 13:54:28 by jhur              #+#    #+#             */
/*   Updated: 2020/08/13 10:50:02 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include "Zombie.hpp"

class	ZombieEvent
{
	private:
		std::string store_type;
	public:
		ZombieEvent();
		void	setZombieType(std::string type);
		Zombie	*newZombie(std::string name);
		Zombie	*randomChump(void);
		~ZombieEvent();
};

#endif
