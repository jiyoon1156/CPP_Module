/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/23 14:11:31 by jhur              #+#    #+#             */
/*   Updated: 2020/08/23 15:07:45 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon()
{}

Peon::Peon(std::string name) : Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(const Peon &copy)
{
	*this = copy;
}

Peon	&Peon::operator=(const Peon &ref)
{
	Victim::copy(ref);
	return (*this);
}

void	Peon::getPolymorphed(void) const
{
	std::cout << getName() << " has been turned into a pink pony!" << std::endl;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}
