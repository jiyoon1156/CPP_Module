/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/04 10:29:51 by jhur              #+#    #+#             */
/*   Updated: 2020/09/05 10:11:53 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
#include <iostream>
#include <stack>

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

		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		const_iterator begin() const;
		const_iterator end() const;

		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		reverse_iterator rbegin();
		reverse_iterator rend();

		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
		const_reverse_iterator rbegin() const;
		const_reverse_iterator rend() const;
};

#endif
