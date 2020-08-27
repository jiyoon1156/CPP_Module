/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/27 15:46:11 by jhur              #+#    #+#             */
/*   Updated: 2020/08/27 17:34:50 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	std::string target;

	Bureaucrat tail("jhur", 1);
	target = "home";
	std::cout << tail << std::endl;
	ShrubberyCreationForm shrub(target);
	tail.signForm(shrub);
	shrub.execute(tail);

	Bureaucrat middle("P-bear", 20);
	std::cout << middle << std::endl;
	target = "shared office";
	RobotomyRequestForm robo(target);
	middle.signForm(robo);
	robo.execute(middle);

	Bureaucrat head("Dall", 1);
	std::cout << head << std::endl;
	target = "own office";
	PresidentialPardonForm p(target);
	p.beSigned(head);
	p.execute(head);


	std::cout << "===========" << std::endl;
    PresidentialPardonForm pres2 = PresidentialPardonForm(target);
	try
    {
        tail.executeForm(pres2);
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "===========" << std::endl;
    try
    {
        pres2.beSigned(middle);
        pres2.execute(middle);
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "===========" << std::endl;
    try
    {
        p.beSigned(head);
        head.executeForm(p);
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
}
