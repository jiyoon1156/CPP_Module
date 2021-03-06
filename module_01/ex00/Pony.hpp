/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 11:25:03 by jhur              #+#    #+#             */
/*   Updated: 2020/08/19 20:55:24 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP
# include <iostream>
# include <string>

class	Pony
{
	private:
		std::string	name;
		std::string nickname;
	public:
		Pony();
		void		sleeping(void);
		void		eating(void);
		void		setName(std::string name);
		std::string	getName(void);
		void		setNickName(std::string name);
		std::string	getNickName(void);
		~Pony();
};

#endif
