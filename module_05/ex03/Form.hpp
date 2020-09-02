/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/27 12:14:37 by jhur              #+#    #+#             */
/*   Updated: 2020/09/02 22:22:22 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
#include <iostream>
#include <string>
#include <exception>
class Form;
#include "Bureaucrat.hpp"

class	Form
{
	private:
		Form();
		std::string 	const _formName;
		bool			_signed;
		unsigned int	const _signGrade;
		unsigned int	const _execGrade;
	public:
		Form(std::string const &name, unsigned int const signGrade, unsigned int execGrade);
		virtual ~Form();
		Form(const Form &copy);
		Form &operator=(const Form &ref);
		class	GradeTooHighException : public std::exception
		{
			public:
				virtual	const char* what() const throw();
		};
		class	GradeTooLowException : public std::exception
		{
			public:
				virtual	const char* what() const throw();
		};
		class	AlreadySignedException : public std::exception
		{
			public:
				virtual	const char* what() const throw();
		};
		class	NeedSignException : public std::exception
		{
			public:
				virtual	const char* what() const throw();
		};
		std::string		getName(void) const;
		bool			getSigned(void) const;
		unsigned int	getSignGrade(void) const;
		unsigned int	getExecGrade(void) const;
		void			beSigned(Bureaucrat &bureaucrat);
		virtual void	execute(Bureaucrat const &executor) const;
};

std::ostream &operator<<(std::ostream &out, Form const &form);

#endif
