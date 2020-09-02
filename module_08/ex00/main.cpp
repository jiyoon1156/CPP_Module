/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 22:17:34 by jhur              #+#    #+#             */
/*   Updated: 2020/09/02 13:19:13 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	std::vector<int> vec;

	vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);

    std::cout << easyfind(vec, 1) << std::endl;
    std::cout << easyfind(vec, 2) << std::endl;
    std::cout << easyfind(vec, 3) << std::endl;
    std::cout << easyfind(vec, 4) << std::endl;
    std::cout << easyfind(vec, -2) << std::endl;
}
