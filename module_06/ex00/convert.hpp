/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/28 14:42:52 by jhur              #+#    #+#             */
/*   Updated: 2020/08/29 11:29:41 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
#define CONVERT_HPP
#include <iostream>
#include <cstdlib>
#include <string>
#include <exception>
#include <stdexcept>
#include <cmath>
#include <ctype.h>
#include <iomanip>

class	Convert
{
	private:
		std::string _value;
	public:
		Convert();
		Convert(std::string value);
		~Convert();
		Convert(const Convert &copy);
		Convert &operator=(const Convert &ref);
		std::exception ImpossibleException() const;
		void	toInt();
		void	toChar();
		void	toFloat();
		void	toDouble();

};

#endif
