/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/23 13:52:49 by jhur              #+#    #+#             */
/*   Updated: 2020/08/23 14:49:35 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP
#include <iostream>
#include <string>

class Victim
{
	private:
		std::string _name;
	public:
		Victim();
		Victim(std::string name);
		Victim(const Victim &copy);
		Victim 			&operator=(const Victim &ref);
		std::string		introducing(void) const;
		virtual	void	getPolymorphed(void) const;
		std::string 	getName(void) const;
		void			copy(Victim const &ref);
		~Victim();
};

std::ostream &operator<<(std::ostream &out, Victim const &victim);

#endif
