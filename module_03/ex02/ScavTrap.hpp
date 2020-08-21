/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 13:28:54 by jhur              #+#    #+#             */
/*   Updated: 2020/08/21 10:37:00 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCANTRAP_HPP
# define SCANTRAP_HPP
#include "ClapTrap.hpp"
#include <iostream>
#include <string>
#include <ctime>
#include <random>

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &copy);
		ScavTrap &operator=(const ScavTrap &ref);
		void	challengeNewcomer(std::string const &target);
		~ScavTrap();
};

#endif
