/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 13:59:58 by jhur              #+#    #+#             */
/*   Updated: 2020/09/02 17:35:52 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

template< class T >
class Array
{
	private:
		T				*_array;
		unsigned int	_numElm;
	public:
		Array();
		Array(unsigned int n);
		Array(const Array<T> &copy);
		virtual ~Array();

		Array	&operator=(const Array &ref);
		T		&operator[](unsigned int n);

		class	OutOfRangeException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		unsigned int size(void) const;
};

template< class T >
Array<T>::Array(): _numElm(0)
{
	this->_array = new T[0];
}

template< class T >
Array<T>::Array(unsigned int n): _numElm(n)
{
	this->_array = new T[_numElm];
}

template< class T >
Array<T>::Array(const Array &copy)
{
	this->_numElm = 0;
	this->_array = nullptr;
	*this = copy;
}

template< class T >
Array<T>::~Array()
{
	if (this->_array)
		delete[] this->_array;
}

template< class T >
Array<T>& Array<T>::operator=(const Array &ref)
{
	if (this->_array)
		delete[] this->_array;
	this->_numElm = ref._numElm;
	this->_array = new T[this->_numElm];
	for(unsigned int i = 0; i < this->_numElm; i++)
		this->_array[i] = ref._array[i];
	return (*this);
}

template< class T >
const char* Array<T>::OutOfRangeException::what() const throw()
{
	return ("out of limits");
}

template< class T >
T& Array<T>::operator[](unsigned int n)
{
	if ((n >= this->_numElm) || !(this->_array))
		throw Array<T>::OutOfRangeException();
	return (this->_array[n]);
}

template< class T >
unsigned int Array<T>::size(void) const
{
	return(this->_numElm);
}

#endif
