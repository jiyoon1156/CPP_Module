/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 12:40:33 by jhur              #+#    #+#             */
/*   Updated: 2020/08/11 17:12:01 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
