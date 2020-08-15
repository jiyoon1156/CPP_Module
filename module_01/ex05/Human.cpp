/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 11:52:50 by jhur              #+#    #+#             */
/*   Updated: 2020/08/15 14:48:55 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human()
{}

std::string	Human::identify(void)
{
	return (this->_brain.identify());
}

//새로운 메모리가 아닌 원래 있는 걸 return 해야 되기 때문에 참조를 한다.
Brain&		Human::getBrain(void)
{
	return (this->_brain);
}

Human::~Human()
{}
