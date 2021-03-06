/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 13:28:51 by jhur              #+#    #+#             */
/*   Updated: 2020/08/21 10:36:48 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "Default ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
: ClapTrap(100, 100, 50, 50, 1, name, 20, 15, 40, 50, 60, 3)
{
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
	std::cout << "A copy constructor of ScavTrap is called." << std::endl;
	*this = copy;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &ref)
{
	ClapTrap::copy(ref);
	return (*this);
}

void	ScavTrap::challengeNewcomer(std::string const &target)
{
	int					i;
	std::random_device	rd;

	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> dis(0, 3);
	i = dis(gen);
	std::string challenge[4] =
	{
		"rock scissor paper",
		"don't laugh for 2 minutes",
		"writing poem",
		"read 1 book in an hour"
	};
	std::cout << target << " accepted " << challenge[i] << " challenge" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}
