/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 09:47:03 by jhur              #+#    #+#             */
/*   Updated: 2020/08/20 14:13:46 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <ctime>
#include <random>

class FragTrap : public ClapTrap
{
	public:
		FragTrap(std::string name);
		void	vaulthunter_dot_exe(std::string const &target);
		~FragTrap();
};

#endif
