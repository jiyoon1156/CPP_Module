/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/28 14:42:44 by jhur              #+#    #+#             */
/*   Updated: 2020/08/29 11:30:37 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

Convert::Convert(){}
Convert::Convert(std::string value): _value(value){}
Convert::~Convert(){}
Convert::Convert(const Convert &copy){*this = copy;}
Convert	&Convert::operator=(const Convert &ref)
{
	this->_value = ref._value;
	return (*this);
}

void	Convert::toChar()
{
	int i = 0;
	std::cout << "char: ";
	try
	{
		i = std::stoi(this->_value);
		if (i >= 32 && i < 127)
			std::cout << "'" << static_cast<char>(i) << "'" << std::endl;
		else
		{
			std::cout << "Non displayable" << std::endl;
			return ;
		}
	}
	catch (std::invalid_argument &e)
	{
		std::cout << "impossible" << std::endl;
	}
	catch (std::out_of_range &e)
	{
		std::cout << "out of range" << std::endl;
	}
}

void	Convert::toInt()
{
	std::cout << "int: ";
	try
	{
		std::cout << std::stoi(this->_value) << std::endl;
	}
	catch (std::invalid_argument &e)
	{
		std::cout << "impossible" << std::endl;
	}
	catch (std::out_of_range &e)
	{
		std::cout << "out of range" << std::endl;
	}
}

void	Convert::toFloat()
{
	float f = 0;
	std::cout << "float: ";
	try
	{
		f = std::stof(this->_value);
		std::cout << std::fixed << std::setprecision(1) << static_cast<float>(f) << "f" << std::endl;
	}
	catch (std::invalid_argument &e)
	{
		std::cout << "impossible" << std::endl;
	}
	catch (std::out_of_range &e)
	{
		std::cout << "out of range" << std::endl;
	}
}

void	Convert::toDouble()
{
	double d = 0;
	std::cout << "double: ";
	try
	{
		d = std::stod(this->_value);
		std::cout << std::fixed << std::setprecision(1) << static_cast<double>(d) << std::endl;
	}
	catch (std::invalid_argument &e)
	{
		std::cout << "impossible" << std::endl;
	}
	catch (std::out_of_range &e)
	{
		std::cout << "out of range" << std::endl;
	}
}
