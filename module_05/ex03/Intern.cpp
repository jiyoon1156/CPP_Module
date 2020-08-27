/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/27 17:37:30 by jhur              #+#    #+#             */
/*   Updated: 2020/08/27 18:46:14 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){}
Intern::~Intern(){}
Intern::Intern(const Intern &copy)
{
	*this = copy;
}

Intern& Intern::operator=(const Intern& assign)
{
	(void)assign;
	return (*this);
}

Form* Intern::createRobotomyRequest(const std::string target)
{
	return (new RobotomyRequestForm(target));
}

Form* Intern::createShrubberyCreation(const std::string target)
{
	return (new ShrubberyCreationForm(target));
}

Form* Intern::createPresidentialPardon(const std::string target)
{
	return (new PresidentialPardonForm(target));
}

Form* Intern::makeForm(const std::string name, const std::string target)
{
	typedef Form* (Intern::*ptr) (const std::string target);
	std::string request[3] = {"shrubbery request", "robotomy request", "presidential request"};
	ptr funcs[3];
	funcs[0] = &Intern::createShrubberyCreation;
	funcs[1] = &Intern::createRobotomyRequest;
	funcs[2] = &Intern::createPresidentialPardon;
	for (int i = 0; i < 3; i++)
	{
		if (name == request[i])
		{
			std::cout << "Intern creates " << name << std::endl;
			return ((this->*funcs[i])(target));
		}
	}
	std::cout << "It's not available." << std::endl;
	return (nullptr);
}
