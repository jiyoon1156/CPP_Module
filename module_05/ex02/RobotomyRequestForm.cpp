/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/27 16:47:11 by jhur              #+#    #+#             */
/*   Updated: 2020/08/27 17:00:45 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm():Form("tmp", 72, 45){}
RobotomyRequestForm::~RobotomyRequestForm(){}

RobotomyRequestForm::RobotomyRequestForm(std::string &target)
: Form("tmp", 72, 45), _target(target){}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy)
: Form("tmp", 72, 45), _target(copy._target)
{
	*this = copy;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &ref)
{
	Form::operator=(ref);
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	std::cout << "Driiilllllllllllllllllllllll" << std::endl;
	if ((rand() % 100) > 50)
		std::cout << "<" << this->_target << ">" << " has been robotomized successfully!" << std::endl;
	else
		std::cout << "<" << this->_target << ">" << " robotomized failed." << std::endl;
}
