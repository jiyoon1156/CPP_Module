/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/27 15:46:11 by jhur              #+#    #+#             */
/*   Updated: 2020/08/27 18:57:33 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{
    Intern intern0;
    Intern intern1;
    Intern intern2;

    Form *f0;
    Form *f1;
    Form *f2;

    f0 = intern0.makeForm("robotomy request", "Bender");
    std::cout << *f0 << std::endl;
    f1 = intern1.makeForm("presidential request", "intern1");
    std::cout << *f1 << std::endl;
    f2 = intern2.makeForm("shrubbery request", "intern2");
    std::cout << *f2 << std::endl;

    std::cout << "===========" << std::endl;
    f2 = intern1.makeForm("whatever form", "what");
    std::cout << "===========" << std::endl;
}
