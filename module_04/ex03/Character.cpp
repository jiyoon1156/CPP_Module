/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 20:01:18 by jhur              #+#    #+#             */
/*   Updated: 2020/08/24 21:16:57 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(){}

Character::Character(std::string name)
{
	this->_name = name;
	this->_equipped = 0;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = nullptr;
}

Character::~Character(){}

Character::Character(const Character& copy)
{

}

Character	&Character::operator=(const  Character &ref)
{

}

void		Character::equip(AMateria* m)
{
	if (m == nullptr || this->_equipped >= 4)
		return ;
}

std::string const &Character::getName() const
{
	return (this->_name);
}
