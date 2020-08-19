/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 12:40:33 by jhur              #+#    #+#             */
/*   Updated: 2020/08/19 20:41:55 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>

class	Contact
{
	private:
		std::string fields[11];
		std::string inputs[11];
	public:
		Contact();
		void get_inputs(void);
		void print_overview(int i);
		void print_all(void);
		~Contact();
};

#endif
