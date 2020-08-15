/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 14:51:09 by jhur              #+#    #+#             */
/*   Updated: 2020/08/15 16:26:38 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
#include "Weapon.hpp"

class HumanA
{
	private:
		Weapon &_weapon;
		std::string _name;
	public:
		HumanA(std::string name, Weapon& club);
		void	attack(void);
		~HumanA();
};

#endif
