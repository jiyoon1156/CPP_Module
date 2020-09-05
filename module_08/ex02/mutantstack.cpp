/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/04 10:29:39 by jhur              #+#    #+#             */
/*   Updated: 2020/09/05 10:11:40 by jhur             ###   ########.fr       */
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

template<class T>
typename MutantStack<T>::const_iterator MutantStack<T>::begin() const
{
	return (this->c.begin());
}

template<class T>
typename MutantStack<T>::const_iterator MutantStack<T>::end() const
{
	return (this->c.end());
}

template<class T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rbegin()
{
	return (this->c.rbegin());
}

template<class T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rend()
{
	return (this->c.rend());
}

template<class T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::rbegin() const
{
	return (this->c.rbegin());
}

template<class T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::rend() const
{
	return (this->c.rend());
}
