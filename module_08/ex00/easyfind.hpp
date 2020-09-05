/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 22:17:31 by jhur              #+#    #+#             */
/*   Updated: 2020/09/05 12:54:51 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <iostream>
# include <vector>
# include <algorithm>

template<class T>
int easyfind(std::vector<T> container, int value)
{
	std::vector<int>::iterator it;
	it = find(container.begin(), container.end(), value);
	if (it == container.end())
		return(-1);
	else
		return (*it);
}

#endif
