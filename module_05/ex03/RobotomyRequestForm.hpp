/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/27 16:47:24 by jhur              #+#    #+#             */
/*   Updated: 2020/08/27 18:30:18 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
#include <iostream>
#include <string>
#include <random>
#include "Form.hpp"
#include "Bureaucrat.hpp"

class RobotomyRequestForm : public Form
{
	private:
		RobotomyRequestForm();
		std::string	_target;
	public:
		RobotomyRequestForm(const std::string &target);
		~RobotomyRequestForm();
		RobotomyRequestForm(RobotomyRequestForm const &copy);
		RobotomyRequestForm& operator=(RobotomyRequestForm const &ref);
		void	execute(Bureaucrat const &executor) const;
};

#endif
