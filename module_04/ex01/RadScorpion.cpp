/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/23 16:39:25 by jhur              #+#    #+#             */
/*   Updated: 2020/08/23 18:47:15 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion()
: Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion &copy)
{
	*this = copy;
}

RadScorpion	&RadScorpion::operator=(const RadScorpion &ref)
{
	Enemy::copy(ref);
	return (*this);
}

void	RadScorpion::takeDamage(int damage)
{
	Enemy::takeDamage(damage - 3);
}

RadScorpion::~RadScorpion()
{
	std::cout <<  "* SPROTCH *" << std::endl;
}
