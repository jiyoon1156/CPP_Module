/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 14:51:15 by jhur              #+#    #+#             */
/*   Updated: 2020/08/15 16:44:56 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
#include "Weapon.hpp"

class HumanB
{
	private:
		Weapon *_weapon;
		std::string _name;
	public:
		HumanB(std::string name);
		void	attack(void);
		void	setWeapon(Weapon &club);
		~HumanB();
};

#endif
