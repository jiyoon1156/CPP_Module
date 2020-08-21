/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 09:46:59 by jhur              #+#    #+#             */
/*   Updated: 2020/08/21 10:36:08 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "Default FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name)
: ClapTrap(100, 100, 100, 100, 1, name,30, 20, 40, 50, 60, 5)
{
	std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& copy)
{
	std::cout << "A copy constructor of FragTrap is called." << std::endl;
	*this = copy;
}

FragTrap	&FragTrap::operator=(const FragTrap &ref)
{
	ClapTrap::copy(ref);
	return (*this);
}

void	FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	int					i;
	std::random_device	rd;

	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> dis(0, 4);
	i = dis(gen);
	if (this->getEnergy() < 25)
		std::cout << "Energy points have to be over 25" << std::endl;
	else
	{
		this->decreaseEnergy();
		if (i == 0)
			RangedAttack(target);
		else if (i == 1)
			MeleeAttack(target);
		else if (i == 2)
			GunAttack(target);
		else if (i == 3)
			CarAttack(target);
		else
			BombAttack(target);
	}

}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}
