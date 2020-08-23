/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/23 16:01:31 by jhur              #+#    #+#             */
/*   Updated: 2020/08/23 18:29:41 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy()
{}

Enemy::Enemy(int hp, std::string const &type)
{
	this->_hp = hp;
	this->_type = type;
}

Enemy::Enemy(const Enemy &copy)
{
	*this = copy;
}

Enemy	&Enemy::operator=(const Enemy &ref)
{
	this->_hp = ref._hp;
	this->_type = ref._type;
	return (*this);
}

std::string	Enemy::getType(void) const
{
	return (this->_type);
}

int			Enemy::getHP(void) const
{
	return (this->_hp);
}

void		Enemy::takeDamage(int damage)
{
	if (damage < 0)
	{
		std::cout << "damage none" << std::endl;
		return ;
	}
	this->_hp -= damage;
}

void		Enemy::copy(Enemy const &ref)
{
	this->_hp = ref._hp;
	this->_type = ref._type;
}

Enemy::~Enemy()
{}
