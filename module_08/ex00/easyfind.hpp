/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 22:17:31 by jhur              #+#    #+#             */
/*   Updated: 2020/09/02 13:19:19 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <iostream>
# include <vector>

template<class T>
int easyfind(std::vector<T> container, int value)
{
	std::vector<int>::iterator it = container.begin();
	while(it < container.end())
	{
		if (*it == value)
			return (*it);
		it++;
	}
	return (-1);
}

#endif
