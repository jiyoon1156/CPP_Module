/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 13:28:54 by jhur              #+#    #+#             */
/*   Updated: 2020/08/20 14:14:18 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCANTRAP_HPP
# define SCANTRAP_HPP

#include "ClapTrap.hpp"
#include <ctime>
#include <random>

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(std::string name);
		void	challengeNewcomer(std::string const &target);
		~ScavTrap();
};

#endif
