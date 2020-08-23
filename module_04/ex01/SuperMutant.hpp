/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/23 16:29:23 by jhur              #+#    #+#             */
/*   Updated: 2020/08/23 18:21:41 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP
#include <iostream>
#include <string>
#include "Enemy.hpp"

class	SuperMutant : public Enemy
{
	public:
		SuperMutant();
		SuperMutant(const SuperMutant &copy);
		~SuperMutant();
		SuperMutant	&operator=(const SuperMutant &ref);
		void	takeDamage(int damage);
};

#endif
