/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 13:37:36 by jhur              #+#    #+#             */
/*   Updated: 2020/08/13 10:43:55 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type)
{
	z_name = name;
	z_type = type;
}

void	Zombie::announce(void)
{
	std::cout << "<" << z_name << " (" << z_type << ")" << ">" << " Braiiiiiiinnnssss..." << std::endl;
}

Zombie::~Zombie()
{}
