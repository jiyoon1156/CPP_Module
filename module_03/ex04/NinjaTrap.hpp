/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 14:58:41 by jhur              #+#    #+#             */
/*   Updated: 2020/08/20 15:07:19 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class NinjaTrap : public ClapTrap
{
	public:
		NinjaTrap(std::string name);
		void	ninjaShoebox(NinjaTrap &target);
		void	ninjaShoebox(FragTrap &target);
		void	ninjaShoebox(ScavTrap &target);
		~NinjaTrap();
};

#endif
