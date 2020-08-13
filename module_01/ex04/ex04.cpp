/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 16:23:13 by jhur              #+#    #+#             */
/*   Updated: 2020/08/13 16:39:39 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string str;
	std::string *ptr;

	str = "HI THIS IS BRAIN";
	ptr = &str;
	std::cout << *ptr << std::endl;
	std::string &ref = str;
	std::cout << ref << std::endl;
}
