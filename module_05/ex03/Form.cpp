/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/27 12:14:28 by jhur              #+#    #+#             */
/*   Updated: 2020/08/27 17:13:28 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string const &name, unsigned int const signGrade, unsigned int execGrade)
: _formName(name), _signed(0), _signGrade(signGrade), _execGrade(execGrade)
{
	if (signGrade < 1 || execGrade < 1)
		throw Form::GradeTooHighException();
	else if (signGrade > 150 || execGrade > 150)
		throw Form::GradeTooLowException();
}

Form::~Form(){}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Exception from Form: Grade is too high!");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Exception from Form: Grade is too low!");
}

Form::Form(const Form &copy)
: _formName(copy._formName), _signed(0), _signGrade(copy._signGrade), _execGrade(copy._execGrade)
{
	if (copy._signGrade < 1 || copy._execGrade < 1)
		throw Form::GradeTooHighException();
	else if (copy._signGrade > 150 || copy._execGrade> 150)
		throw Form::GradeTooLowException();
	*this = copy;
}

Form	&Form::operator=(const Form &ref)
{
	this->_signed = ref._signed;
	return (*this);
}

std::string		Form::getName(void) const
{
	return (this->_formName);
}

unsigned int	Form::getSignGrade(void) const
{
	return (this->_signGrade);
}

unsigned int	Form::getExecGrade(void) const
{
	return (this->_execGrade);
}

bool			Form::getSigned(void) const
{
	return (this->_signed);
}

void		Form::beSigned(Bureaucrat &b)
{
	if (this->_signed != 0)
		std::cout << "It is already signed!" << std::endl;
	else if (b.getGrade() > this->_signGrade)
		throw Form::GradeTooLowException();
	else
		this->_signed = 1;
}

void		Form::execute(Bureaucrat const & executor) const
{
	if (this->_signed == 0)
		std::cout << "Form must be signed first!" << std::endl;
	if (executor.getGrade() > this->_signGrade)
		throw Form::GradeTooLowException();
}

std::ostream &operator<<(std::ostream &out, Form const &form)
{
	out << form.getName() << ", Form sign grade is " << form.getSignGrade();
	out << ", and Form execute grade is " << form.getExecGrade();
	return (out);
}
