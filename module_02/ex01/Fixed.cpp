/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 15:30:33 by jhur              #+#    #+#             */
/*   Updated: 2020/08/18 18:53:34 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _FixedPointValue(0)
{
	std::cout << "Default constructor called" << std::endl;
}
///////////////////////////////////////////////////////
Fixed::Fixed(const int param)
{
	std::cout << "Int constructor called" << std::endl;
	//256 곱해주기
	this->_FixedPointValue = (param << Fixed::_FractionalBits);
}

Fixed::Fixed(const float param)
{
	std::cout << "Float constructor called" << std::endl;
	//바로 밀지 않고 숫자로 곱해주는 이유는 식에 정수 또는 범위가 지정되지 않은 열거형 형식이 있어야 합니다.
	//실수나 포인터는 비트연산이 불가능하다고 한다. 그래서 정수로 변환해서 에둘러서 계산해주는 것
	//256 곱해주기
	this->_FixedPointValue = roundf(param * (1 << Fixed::_FractionalBits));
	// this->_FixedPointValue = roundf(param << Fixed::_FractionalBits);
}

std::ostream &operator<<(std::ostream &out, Fixed const &param)
{
	out << param.toFloat();
	return (out);
}

float	Fixed::toFloat(void) const
{
	// (float)(1 << Fixed::_FractionalBits) == 256
	// 곱해줬던 256 나눠주기
	return ((float)this->_FixedPointValue / (float)(1 << Fixed::_FractionalBits));
}

int		Fixed::toInt(void) const
{
	// 곱해줬던 256 나눠주기
	return (this->_FixedPointValue >> Fixed::_FractionalBits);
}
///////////////////////////////////////////////////////
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
