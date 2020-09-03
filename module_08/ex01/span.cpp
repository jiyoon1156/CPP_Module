/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/02 13:43:00 by jhur              #+#    #+#             */
/*   Updated: 2020/09/03 15:41:27 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span()
{
	this->_containerVLM = 0;
	this->_MaxContainerVLM = 0;
	this->container.reserve(0);
}

Span::Span(unsigned int N)
{
	this->_containerVLM = 0;
	this->_MaxContainerVLM = 0;
	this->container.reserve(N);
}

Span::Span(const Span &copy)
{
	*this = copy;
}

Span	&Span::operator=(const Span &ref)
{

}

Span::~Span(){}

const char* Span::ContainerFullException::what() const throw()
{
	return ("Span is Full!");
}

const char* Span::NotEnoughNumException::what() const throw()
{
	return ("Not enough numbers!");
}

void	Span::addNumber(int num)
{
	if (this->_containerVLM >= this->_MaxContainerVLM)
		throw ContainerFullException();
	container.push_back(num);
	this->_containerVLM++;
}

int		Span::shortestSpan(void)
{
	int size = this->container.size();
	if (size <= 1)
		throw NotEnoughNumException();
	std::vector<int>::iterator it = this->container.begin();
	std::vector<int>::iterator itNext = this->container.begin()++;
	int MinVaule = *itNext++ - *it++;
	while (itNext < container.end())
	{
		int tmp = *itNext - *it;
		if (tmp < MinVaule)
			MinVaule = tmp;
		*itNext++;
		*it++;
	}
	return (MinVaule);
}

int		Span::longestSpan(void)
{

}
