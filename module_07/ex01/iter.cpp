/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 12:16:56 by jhur              #+#    #+#             */
/*   Updated: 2020/08/31 13:56:56 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

//first param: addresss of an array
//second param: length of the array
//third param: function that is called on each element of the array

template< class T >
void iter( T* array, int length, void (*f)(T const &element) )
{
	for (int i = 0; i < length; i++)
		(*f)(array[i]);
}

template< class T >
void print( T const &element )
{
	std::cout << element << " ";
}

int main()
{
	int int_arr[5] = {0, 1, 2, 3, 4};
	iter(int_arr, 5, print);
	std::cout << std::endl;

	std::string str_arr[3] = {"hello", "world", "42"};
	iter(str_arr, 3, print);
	std::cout << std::endl;

	float flt_arr[4] = {0.0f, 5.0f, 10.0f, 200.0f};
	iter(flt_arr, 4, print);
	std::cout << std::endl;

	double db_arr[3] = {-5.0, 0.0, 5.0};
	iter(db_arr, 3, print);
	std::cout << std::endl;
}
