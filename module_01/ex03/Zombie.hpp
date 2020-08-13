/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 13:46:07 by jhur              #+#    #+#             */
/*   Updated: 2020/08/13 12:54:11 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <iostream>
#include <string>

class	Zombie
{
	private:
		std::string z_name;
		std::string z_type;
	public:
		Zombie();
		Zombie(std::string name, std::string type);
		void	announce(void);
		void	setName(std::string name);
		void	setType(std::string type);
		~Zombie();
};

#endif
