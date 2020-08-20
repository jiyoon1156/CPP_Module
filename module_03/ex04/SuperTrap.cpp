/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 15:28:23 by jhur              #+#    #+#             */
/*   Updated: 2020/08/20 17:54:19 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

// SuperTrap::SuperTrap(std::string name)
// : ClapTrap(100, 100, 120, 120, 1, name, 60, 20, 40, 50, 60, 5)//간접 비가상 기본 클래스를 사용할 수 없습니다.
// {
// 	std::cout << "SuperTrap constructor called" << std::endl;
// }

SuperTrap::SuperTrap(std::string name)
{
	std::cout << "SuperTrap constructor called" << std::endl;
}

void	SuperTrap::rangedAttack(std::string const &target)
{
	FragTrap::RangedAttack(target);
}

void	SuperTrap::meleeAttack(std::string const &target)
{
	NinjaTrap::MeleeAttack(target);
}
SuperTrap::~SuperTrap()
{
	std::cout << "SuperTrap destructor called" << std::endl;
}
