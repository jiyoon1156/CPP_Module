/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 13:21:05 by jhur              #+#    #+#             */
/*   Updated: 2020/08/11 17:08:16 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "contact.hpp"
# include <iostream>
# include <iomanip>
# include <string>

class	Phonebook
{
	private:
		Contact		contact[8];
		int			cnt;
	public:
		Phonebook();
		void	current_status();
		void	add_contact();
		void	searching();
		~Phonebook();
};
