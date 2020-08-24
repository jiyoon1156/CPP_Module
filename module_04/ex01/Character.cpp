/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/23 16:48:26 by jhur              #+#    #+#             */
/*   Updated: 2020/08/24 12:35:09 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{}

Character::Character(std::string const &name)
: _name(name), _ap(40), _weapon(nullptr)
{}

Character::Character(const Character &copy)
{
	*this = copy;
}

Character	&Character::operator=(const Character &ref)
{
	this->_name = ref._name;
	this->_ap = ref._ap;
	return (*this);
}

void		Character::recoverAP(void)
{
	if (this->_ap + 10 <= 40)
		this->_ap += 10;
	else
		this->_ap = 40;
}

void		Character::equip(AWeapon *weapon)
{
	this->_weapon = weapon;
}

std::string	Character::getName(void) const
{
	return (this->_name);
}

void		Character::attack(Enemy *enemy)
{
	std::string	phrase;
	int			weapon_damage;

	if (this->_weapon == nullptr || this->_ap == 0)
		return ;
	phrase = this->_name + " attacks " + enemy->getType() + " with a " + this->_weapon->getName();
	std::cout << phrase << std::endl;
	this->_ap -= this->_weapon->getAPCost();
	weapon_damage = this->_weapon->getDamage();
	enemy->takeDamage(weapon_damage);
	this->_weapon->attack();
	if (enemy->getHP() <= 0)
		delete (enemy);
}

int			Character::getAP(void) const
{
	return (this->_ap);
}

std::string	Character::getWeaponName(void) const
{
	if (this->_weapon == nullptr)
		return ("null");
	else
		return (this->_weapon->getName());
}

std::ostream& operator<<(std::ostream &out, const Character &chr)
{
	out << chr.getName() << " has ";
	out << chr.getAP() << " AP";
	if (chr.getWeaponName() == "null")
		out << " and is unarmed" << std::endl;
	else
		out << " and wields a " << chr.getWeaponName() << std::endl;
	return (out);
}

Character::~Character()
{}
