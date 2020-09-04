/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/04 10:29:51 by jhur              #+#    #+#             */
/*   Updated: 2020/09/04 11:56:07 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
#include <iostream>
#include <stack>
#include <deque>

template<class T>
class MutantStack : public std::stack<T>
{
	private:
	public:
		MutantStack();
		MutantStack(const MutantStack &copy);
		~MutantStack();
		MutantStack<T> &operator=(const MutantStack &ref);

		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin();
		iterator end();
};

#endif
