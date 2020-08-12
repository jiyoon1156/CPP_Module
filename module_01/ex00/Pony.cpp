/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 11:02:02 by jhur              #+#    #+#             */
/*   Updated: 2020/08/12 13:14:05 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony()
{}

void	Pony::sleeping(void)
{
	std::cout << this->name << " is sleeping" << std::endl;
}

void	Pony::eating(void)
{
	std::cout << this->nickname << " is eating" << std::endl;
}

void	Pony::setName(std::string name)
{
	this->name = name;
}

void	Pony::setNickName(std::string nickname)
{
	this->nickname = nickname;
}

std::string Pony::getName(void)
{
	return (this->name);
}

std::string Pony::getNickName(void)
{
	return (this->nickname);
}

Pony::~Pony()
{}
