/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 14:50:33 by jhur              #+#    #+#             */
/*   Updated: 2020/08/31 14:50:35 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <class T>
void print (Array<T> &arr)
{
	try
	{
		for (unsigned int i = 0; i < arr.size() + 1; i++)
			std::cout << (arr[i]) << std::endl;
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}

int main()
{
	std::cout << "\n===================int test=====================" << std::endl;
	Array<int> test(10);
	for(int i = 0; i < 10; i++)
		test[i] = i;
	print(test);

	std::cout << "\n===================char test=====================" << std::endl;
	Array<char> ch(10);
	for (int i = 0; i < 10; i++)
		ch[i] = 'a' + i;
	print(ch);

	std::cout << "\n====================copy test===================" << std::endl;
	Array<int> test2(test);
	std::cout << "==== test2 ====" << std::endl;
	print(test2);
	test2[0] = 100;
	std::cout << "==== test2[0] = 100 ====" << std::endl;
	print(test2);
	std::cout << "==== test ====" << std::endl;
	print(test);

	std::cout << "\n====================assign test===================" << std::endl;
	Array<int> test3;
	test3 = test2;
	std::cout << "==== test3 ====" << std::endl;
	print(test3);
	std::cout << "==== test3[0] = 10000 ====" << std::endl;
	test3[0] = 10000;
	print(test3);
	std::cout << "==== test2 ====" << std::endl;
	print(test2);


	std::cout << "\n==================== default constructor try-catch===============" << std::endl;
	Array<int> test4;
	try
	{
		test4[0];
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}
