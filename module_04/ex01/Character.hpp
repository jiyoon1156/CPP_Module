/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/23 16:48:23 by jhur              #+#    #+#             */
/*   Updated: 2020/08/23 18:36:33 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include "AWeapon.hpp"
#include "Enemy.hpp"

class	Character
{
	private:
		std::string _name;
		int			_ap;
		AWeapon		*_weapon;
	public:
		Character();
		Character(std::string const &name);
		Character(const Character &copy);
		Character	&operator=(const Character &ref);
		void		recoverAP(void);
		void		equip(AWeapon *weapon);
		void		attack(Enemy *enemy);
		std::string	getName(void) const;
		int			getAP(void) const;
		std::string	getWeaponName(void) const;
		~Character();
};

std::ostream& operator<<(std::ostream &out, const Character &chr);

#endif
