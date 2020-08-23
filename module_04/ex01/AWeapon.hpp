/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/23 15:31:43 by jhur              #+#    #+#             */
/*   Updated: 2020/08/23 18:23:00 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP
#include <iostream>
#include <string>

class AWeapon
{
	private:
		std::string _name;
		int			_apcost;
		int			_damage;
	public:
		AWeapon();
		AWeapon(std::string const & name, int apcost, int damage);
		AWeapon(const AWeapon &copy);
		AWeapon			&operator=(const AWeapon &ref);
		virtual	~AWeapon();
		std::string 	getName(void) const;
		int 			getAPCost(void) const;
		int 			getDamage(void) const;
		virtual	void	attack(void) const = 0;
		void			copy(AWeapon const &ref);
};

#endif
