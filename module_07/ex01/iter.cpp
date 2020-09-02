/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 12:16:56 by jhur              #+#    #+#             */
/*   Updated: 2020/09/02 16:07:05 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template< class T >
void iter( T* array, int length, void (*f)(T const &element) )
{
	for (int i = 0; i < length; i++)
		(*f)(array[i]);
}

template< class T >
void show( T const &element )
{
	std::cout << element << " ";
}
/*
class Awesome
{
	public:
		Awesome( void ) : _n( 42 ) { return; }
		int get( void ) const { return this->_n; }
	private:
		int _n;
};
std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }
template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }

int main()
{
	int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
	Awesome tab2[5];
	iter( tab, 5, print );
	iter( tab2, 5, print );
	return 0;
}
*/

int main()
{
	int int_arr[5] = {0, 1, 2, 3, 4};
	iter(int_arr, 5, show);
	std::cout << std::endl;

	std::string str_arr[3] = {"hello", "world", "42"};
	iter(str_arr, 3, show);
	std::cout << std::endl;

	float flt_arr[4] = {0.0f, 5.0f, 10.0f, 200.0f};
	iter(flt_arr, 4, show);
	std::cout << std::endl;

	double db_arr[3] = {-5.0, 0.0, 5.0};
	iter(db_arr, 3, show);
	std::cout << std::endl;
}
