/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 11:52:47 by jhur              #+#    #+#             */
/*   Updated: 2020/08/15 14:45:27 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{}

std::string	Brain::identify(void)
{
	std::ostringstream address;
	
	//this 는 brain 객체의 주소
	address << this;
	// address << (const void*)this;
	return (address.str());
}

Brain::~Brain()
{}
