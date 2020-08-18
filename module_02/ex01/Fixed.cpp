/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 15:30:33 by jhur              #+#    #+#             */
/*   Updated: 2020/08/18 17:37:55 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _FixedPointValue(0)
{
	std::cout << "Default constructor called" << std::endl;
}
/////////////////////////
Fixed::Fixed(const int param)
{
	std::cout << "Int constructor called" << std::endl;
	this->_FixedPointValue = (param << Fixed::_FractionalBits);
	// std::cout << this->_FixedPointValue << std::endl;
}

Fixed::Fixed(const float param)
{
	std::cout << "Float constructor called" << std::endl;
	this->_FixedPointValue = roundf(param * (1 << Fixed::_FractionalBits));
}

std::ostream &operator<<(std::ostream &out, Fixed const &param)
{
	out << param.toFloat();
	return (out);
}

float	Fixed::toFloat(void) const
{
	// (float)(1 << Fixed::_FractionalBits) == 256
	return ((float)this->_FixedPointValue / (float)(1 << Fixed::_FractionalBits));
}

int		Fixed::toInt(void) const
{
	return (this->_FixedPointValue >> Fixed::_FractionalBits);
}
//////////////////////////////
Fixed::Fixed(const Fixed &cp)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_FixedPointValue = cp.getRawBits();
}

Fixed	&Fixed::operator=(const Fixed &ref)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_FixedPointValue = ref.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_FixedPointValue);
}

void	Fixed::setRawBits(int const raw)
{
	this->_FixedPointValue = raw;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
