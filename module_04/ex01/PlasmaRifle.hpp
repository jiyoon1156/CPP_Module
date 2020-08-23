/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/23 15:45:53 by jhur              #+#    #+#             */
/*   Updated: 2020/08/23 18:13:02 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP
#include <iostream>
#include <string>
#include "AWeapon.hpp"

class	PlasmaRifle : public AWeapon
{
	public:
		PlasmaRifle();
		PlasmaRifle(const PlasmaRifle &copy);
		~PlasmaRifle();
		AWeapon	&operator=(const AWeapon &ref);
		void	attack(void) const;
		PlasmaRifle	&operator=(const PlasmaRifle &ref);
};

#endif
