/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/04 10:29:39 by jhur              #+#    #+#             */
/*   Updated: 2020/09/04 12:31:27 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

template<class T>
MutantStack<T>::MutantStack(){};

template<class T>
MutantStack<T>::MutantStack(const MutantStack &copy)
{
	*this = copy;
};

template<class T>
MutantStack<T>::~MutantStack(){};

template<class T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack &ref)
{
	this->c = ref.c;
	return (*this);
}

template<class T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
	return (this->c.begin());
}

template<class T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
	return (this->c.end());
}
