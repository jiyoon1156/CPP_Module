/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 20:01:18 by jhur              #+#    #+#             */
/*   Updated: 2020/08/25 16:28:02 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(){}

Character::Character(std::string const &name)
{
	this->_name = name;
	this->_equipped = 0;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = nullptr;
}

Character::~Character()
{
	for (int i = 0; i < this->_equipped; i++)
		delete this->_inventory[i];
}

Character::Character(const Character& copy)
{
	for (int i = 0; i < copy._equipped; i++)
		this->equip(copy._inventory[i]->clone());
	for (int i = this->_equipped; i < 4; i++)
		this->_inventory[i] = nullptr;
}

Character	&Character::operator=(const  Character &ref)
{
	this->_name = ref._name;
	for (int i = 0; i < this->_equipped; i++)
		delete this->_inventory[i];
	this->_equipped = 0;
	for (int i = 0; i < ref._equipped; i++)
		this->equip(ref._inventory[i]->clone());
	for (int i = this->_equipped; i < 4; i++)
		this->_inventory[i] = nullptr;
	return (*this);
}

void		Character::equip(AMateria* m)
{
	//nonexistent Materia
	if (m == nullptr || this->_equipped > 3)
		return ;
	//Materia in a full inventory
	for (int i = 0; i < this->_equipped; i++)
		if (this->_inventory[i] == m)
			return ;
	// this->_inventory[this->_equipped] = m;
	// this->_equipped++;
	this->_inventory[this->_equipped++] = m;
}

void		Character::unequip(int idx)
{
	if (idx < 0 || idx > this->_equipped || this->_inventory[idx] == nullptr)
		return ;
	for (int i = idx; i < 3; i++)
	{
		this->_inventory[i] = this->_inventory[i + 1];
		this->_inventory[i + 1] = nullptr;
	}
	this->_equipped--;
}

void		Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx >= this->_equipped || this->_inventory[idx] == nullptr)
		return ;
	this->_inventory[idx]->use(target);
}

std::string const &Character::getName() const
{
	return (this->_name);
}
