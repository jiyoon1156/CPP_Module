/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/23 16:39:28 by jhur              #+#    #+#             */
/*   Updated: 2020/08/23 18:21:46 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP
#include <iostream>
#include <string>
#include "Enemy.hpp"

class	RadScorpion : public Enemy
{
	public:
		RadScorpion();
		RadScorpion(const RadScorpion &copy);
		~RadScorpion();
		RadScorpion	&operator=(const RadScorpion &ref);
		void	takeDamage(int damage);
};
#endif
