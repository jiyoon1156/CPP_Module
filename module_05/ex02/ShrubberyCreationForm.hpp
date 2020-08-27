/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/27 14:44:14 by jhur              #+#    #+#             */
/*   Updated: 2020/08/27 15:28:19 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
#include <iostream>
#include <string>
#include <fstream>
#include "Form.hpp"
#include "Bureaucrat.hpp"

class ShrubberyCreationForm : public Form
{
	private:
		ShrubberyCreationForm();
		std::string	_target;
	public:
		ShrubberyCreationForm(std::string &target);
		~ShrubberyCreationForm();
		ShrubberyCreationForm(ShrubberyCreationForm const &copy);
		ShrubberyCreationForm& operator=(ShrubberyCreationForm const &ref);
		void	execute(Bureaucrat const &executor) const;
};

#endif
