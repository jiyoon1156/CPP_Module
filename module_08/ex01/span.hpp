/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/02 13:33:14 by jhur              #+#    #+#             */
/*   Updated: 2020/09/03 13:36:54 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
#include <iostream>
#include <vector>
#include <exception>
#include <stdexcept>

class	Span
{
	private:
		std::vector<int> container;
		unsigned int	_containerVLM;
		unsigned int	_MaxContainerVLM;
	public:
		Span();
		Span(unsigned int N);
		Span(const Span &copy);
		~Span();
		Span &operator=(const Span &ref);
		class	ContainerFullException : public std::exception
		{
			public:
				virtual	const char* what() const throw();
		};
		class	NotEnoughNumException : public std::exception
		{
			public:
				virtual	const char* what() const throw();
		};
		void	addNumber(int num);
		int		shortestSpan(void);
		int		longestSpan(void);
};

#endif
