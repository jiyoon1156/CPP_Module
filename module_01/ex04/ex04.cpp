/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 16:23:13 by jhur              #+#    #+#             */
/*   Updated: 2020/08/13 19:40:24 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string str;
	std::string *ptr;
	
	//포인터는 주소를 가지고 있고 레퍼런스(참조)는 값을 가리키고 있다. 별명 같다고 생각.
	str = "HI THIS IS BRAIN";
	ptr = &str;
	std::cout << *ptr << std::endl;
	std::string &ref = str;
	std::cout << ref << std::endl;
}
