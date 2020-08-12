/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zomebie.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 13:46:07 by jhur              #+#    #+#             */
/*   Updated: 2020/08/12 18:09:04 by jhur             ###   ########.fr       */
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
		Zombie(std::string name, std::string type);
		void	announce(void);
		~Zombie();
};

#endif
