/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/27 17:37:39 by jhur              #+#    #+#             */
/*   Updated: 2020/08/27 18:40:13 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
#include <iostream>
#include <string>
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

class	Intern
{
	public:
		Intern();
		~Intern();
		Intern(const Intern &copy);
		Intern &operator=(const Intern &ref);
		Form*	makeForm(const std::string formName, const std::string target);
		Form*	createRobotomyRequest(const std::string target);
		Form*	createShrubberyCreation(const std::string target);
		Form*	createPresidentialPardon(const std::string target);
};

#endif
