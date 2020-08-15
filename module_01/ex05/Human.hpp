/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 11:52:53 by jhur              #+#    #+#             */
/*   Updated: 2020/08/15 14:48:10 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP
#include "Brain.hpp"

class	Human
{
	private:
		Brain _brain;
	public:
		Human();
		std::string	identify(void);
		Brain&		getBrain(void);
		~Human();
};

#endif
