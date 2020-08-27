/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/27 10:31:50 by jhur              #+#    #+#             */
/*   Updated: 2020/08/27 17:15:17 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){}

Bureaucrat::~Bureaucrat(){}

Bureaucrat::Bureaucrat(std::string const &name, unsigned int grade) : _name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade = grade;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Exception from Bureaucrat: Grade is too high!");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Exception from Bureaucrat: Grade is too low!");
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : _name(copy._name)
{
	if (copy._grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (copy._grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade = copy._grade;
	*this = copy;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &ref)
{
	this->_grade = ref._grade;
	return (*this);
}

std::string		Bureaucrat::getName(void) const
{
	return (this->_name);
}

unsigned int	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureau)
{
	return (out << bureau.getName() << ", bureaucrat grade " << bureau.getGrade() << ".");
}

void			Bureaucrat::incrementGrade(void)
{
	this->_grade--;
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void			Bureaucrat::decrementGrade(void)
{
	this->_grade++;
	if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

void			Bureaucrat::signForm(Form &form)
{
	if (form.getSigned() != 0)
		std::cout << *this << " cannot sign " << form << " because the form is already signed." << std::endl;
	else if (this->_grade > form.getSignGrade())
	{
		std::cout << *this << " cannot sign " << form << " because its grade is too low." << std::endl;
	}
	else
	{
		std::cout << *this << " signs " << form << std::endl;
		form.beSigned(*this);
	}
}

void			Bureaucrat::executeForm(Form const &form)
{
	if (form.getSigned() == 0)
		std::cout << *this << " cannot execute " << form << " because the form needs to be signed." << std::endl;
	else if (this->_grade > form.getExecGrade())
	{
		std::cout << *this << " cannot execute " << form << " because its grade is too low." << std::endl;
	}
	else
	{
		std::cout << *this << " executes " << form << std::endl;
		form.execute(*this);
	}
}
