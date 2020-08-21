/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 15:33:36 by jhur              #+#    #+#             */
/*   Updated: 2020/08/21 17:03:49 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP
#include <iostream>
#include <string>

class Sorcerer
{
	private:
		std::string _name;
		std::string _title;
	public:
		Sorcerer();
		Sorcerer(std::string name, std::string title);
		Sorcerer(const Sorcerer &copy);
		Sorcerer &operator=(const Sorcerer &ref);
		void	birth(void);
		void	death(void);
		void	introducing(void);
		~Sorcerer();
};

#endif
