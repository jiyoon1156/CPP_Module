/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 11:42:12 by jhur              #+#    #+#             */
/*   Updated: 2020/09/04 09:57:22 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

/*
class
Awesome {
	public:
		Awesome( int n ) : _n( n ) {}
		bool operator==( Awesome const & rhs ) { return (this->_n == rhs._n); }
		bool operator!=( Awesome const & rhs ) { return (this->_n != rhs._n); }
		bool operator>( Awesome const & rhs ) { return (this->_n > rhs._n); }
		bool operator<( Awesome const & rhs ) { return (this->_n < rhs._n); }
		bool operator>=( Awesome const & rhs ) { return (this->_n >= rhs._n); }
		bool operator<=( Awesome const & rhs ) { return (this->_n <= rhs._n); }
	private:
		int _n;
};
*/
template< class T >
void swap( T& a, T& b )
{
	T tmp = a; // T tmp(a);
	a = b;
	b = tmp;
}

template< class T >
const T& min( T& a, T& b )
{
	return (b < a)? b : a;
}

template< class T >
const T& max( T& a, T& b )
{
	return (a < b)? b : a;
}

int main( void )
{
	int a = 2;
	int b = 3;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min(a, b) = " << ::min( a, b ) << std::endl;
	std::cout << "max(a, b) = " << ::max( a, b ) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min(c, d) = " << ::min( c, d ) << std::endl;
	std::cout << "max(c, d) = " << ::max( c, d ) << std::endl;
	/*
	std::cout << "===============Awesome Test====================" << std::endl;

	Awesome aa(2);
	Awesome bb(3);
	Awesome ret(0);

	::swap(aa, bb);
	if (aa > bb)
		std::cout << "its swapped" << std::endl;
	ret = ::min(aa, bb);
	if (ret == bb)
		std::cout << "min worked" << std::endl;
	ret = ::max(aa, bb);
	if (ret == aa)
		std::cout << "max worked" << std::endl;
	*/
	return 0;
}
