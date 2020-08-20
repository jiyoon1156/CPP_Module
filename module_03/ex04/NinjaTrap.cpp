/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 14:58:29 by jhur              #+#    #+#             */
/*   Updated: 2020/08/20 15:17:42 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name)
: ClapTrap(60, 60, 120, 120, 1, name, 60, 5, 40, 50, 60, 0)
{
	std::cout << "NinjaTrap constructor called" << std::endl;
}

void	NinjaTrap::ninjaShoebox(NinjaTrap &target)
{
	std::cout << target.getName() << " is using ninja-trap skill" << std::endl;
}

void	NinjaTrap::ninjaShoebox(FragTrap &target)
{
	std::cout << target.getName() << " is using frag-trap skill" << std::endl;
}

void	NinjaTrap::ninjaShoebox(ScavTrap &target)
{
	std::cout << target.getName() << " is using scav-trap skill" << std::endl;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "NinjaTrap destructor called" << std::endl;
}
