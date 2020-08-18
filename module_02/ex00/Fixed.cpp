/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 13:30:28 by jhur              #+#    #+#             */
/*   Updated: 2020/08/18 15:27:12 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _FixedPointValue(0)
{
	std::cout << "Default constructor called" << std::endl;
}

//this 는 객체의 주소, 자기 자신을 가리키는 포인터
//*this 는 자기 자신의 클래스 그 자체
Fixed::Fixed(const Fixed &cp)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_FixedPointValue = cp.getRawBits();
	// *this = cp;
}

//&Fixed 참조자를 반환하게 되면 -> return 뒤의 실제 객체 그 자체를 반환
//Fixed  변수를 반환하게 되면 -> return 뒤의 객체를 복사한 것을 반환
Fixed	&Fixed::operator=(const Fixed &ref)
{
	std::cout << "Assignation operator called" << std::endl;
	// *this = ref; 둘 다 fixed 객체라서 재귀로 인식함
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
