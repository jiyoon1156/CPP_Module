/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 14:58:29 by jhur              #+#    #+#             */
/*   Updated: 2020/08/21 10:29:33 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap()
{
	std::cout << "Default NinjaTrap constructor called" << std::endl;
}

NinjaTrap::NinjaTrap(std::string name)
: ClapTrap(60, 60, 120, 120, 1, name, 60, 5, 40, 50, 60, 0)
{
	std::cout << "NinjaTrap constructor called" << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap &copy)
{
	std::cout << "NinjaTrap copy constructor called" << std::endl;
	*this = copy;
}

NinjaTrap	&NinjaTrap::operator=(const NinjaTrap &ref)
{
	ClapTrap::copy(ref);
	return (*this);
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
