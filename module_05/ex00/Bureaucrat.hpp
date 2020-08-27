/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/27 10:31:53 by jhur              #+#    #+#             */
/*   Updated: 2020/08/27 12:34:25 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
#include <iostream>
#include <string>
#include <exception>

class	Bureaucrat
{
	private:
		Bureaucrat();
		std::string	const	_name;
		unsigned int		_grade;
	public:
		Bureaucrat(std::string const &name, unsigned int grade);
		virtual ~Bureaucrat();
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat &operator=(const Bureaucrat &ref);
		std::string		getName(void) const;
		unsigned int	getGrade(void) const;
		void			incrementGrade(void);
		void			decrementGrade(void);
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
};
std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureau);
#endif
