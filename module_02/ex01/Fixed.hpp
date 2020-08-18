/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 15:30:36 by jhur              #+#    #+#             */
/*   Updated: 2020/08/18 17:18:26 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>
#include <cmath>

class	Fixed
{
	private:
		int					_FixedPointValue;
		static const int	_FractionalBits = 8;
	public:
		Fixed();
		Fixed(const int param);
		Fixed(const float param);
		Fixed(const Fixed &cp);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		Fixed	&operator=(const Fixed &ref);
		float	toFloat(void) const;
		int		toInt(void) const;
		~Fixed();
};

std::ostream &operator<<(std::ostream &out, Fixed const &param);

#endif
