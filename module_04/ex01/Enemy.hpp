/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/23 16:01:37 by jhur              #+#    #+#             */
/*   Updated: 2020/08/23 18:19:24 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

#include <iostream>
#include <string>

class Enemy
{
	private:
		int	_hp;
		std::string _type;
	public:
		Enemy();
		Enemy(int hp, std::string const &type);
		Enemy(const Enemy &copy);
		Enemy			&operator=(const Enemy &ref);
		virtual ~Enemy();
		std::string 	getType(void) const;
		int				getHP(void)	const;
		virtual	void	takeDamage(int damage);
		void			copy(Enemy const &ref);
};

#endif
