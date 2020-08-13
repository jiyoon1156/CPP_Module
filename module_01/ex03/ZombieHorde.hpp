/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 10:41:36 by jhur              #+#    #+#             */
/*   Updated: 2020/08/13 11:31:29 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include "Zombie.hpp"
#include <iostream>
#include <string>
#include <cstdlib>

class	ZombieHorde
{
	private:
		int		n;
		Zombie	*random_zombie;
	public:
		ZombieHorde(int N);
		void	setZombieType(std::string type);
		Zombie	*make_horde(void);
		~ZombieHorde();
};

#endif
