/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 15:33:36 by jhur              #+#    #+#             */
/*   Updated: 2020/08/23 14:41:21 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP
#include <iostream>
#include <string>
#include "Victim.hpp"
class Sorcerer
{
	private:
		std::string _name;
		std::string _title;
	public:
		Sorcerer();
		Sorcerer(std::string name, std::string title);
		Sorcerer(const Sorcerer &copy);
		Sorcerer	&operator=(const Sorcerer &ref);
		std::string	introducing(void) const;
		void		polymorph(Victim const &victim) const;
		~Sorcerer();
};

std::ostream &operator<<(std::ostream &out, Sorcerer const &sorcerer);

#endif
