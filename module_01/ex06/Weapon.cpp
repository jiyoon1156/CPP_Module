/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 14:51:21 by jhur              #+#    #+#             */
/*   Updated: 2020/08/15 16:05:33 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{}

Weapon::Weapon(std::string club)
{
	setType(club);
}

//이 함수의 반환값이 변경되지 않도록 할때 const를 붙이는거고
//참조를 하는 이유는 이전과 같다. 진짜 type 을 반환.
//const & 같이 쓰는 것은 나 값 변경안하고 참조만 할게
const std::string &Weapon::getType(void)
{
	return (this->type);
}


void Weapon::setType(std::string club)
{
	this->type = club; 
}

Weapon::~Weapon()
{}
