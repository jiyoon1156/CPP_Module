/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/23 15:59:25 by jhur              #+#    #+#             */
/*   Updated: 2020/08/23 18:16:00 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

#include <iostream>
#include <string>
#include "AWeapon.hpp"

class	PowerFist : public AWeapon
{
	public:
		PowerFist();
		PowerFist(const PowerFist &copy);
		~PowerFist();
		PowerFist	&operator=(const PowerFist &ref);
		void	attack(void) const;
};

#endif
