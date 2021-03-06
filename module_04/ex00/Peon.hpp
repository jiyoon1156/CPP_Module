/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/23 14:11:34 by jhur              #+#    #+#             */
/*   Updated: 2020/08/23 14:48:23 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP
#include <iostream>
#include <string>
#include "Victim.hpp"

class	Peon : public Victim
{
	public:
		Peon();
		Peon(std::string name);
		Peon(const Peon &copy);
		Peon &operator=(const Peon &ref);
		void	introducing(void);
		void	getPolymorphed(void) const;
		~Peon();
};

#endif
