/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/27 13:55:54 by jhur              #+#    #+#             */
/*   Updated: 2020/08/27 14:28:30 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat head("Dall", 1);
	std::cout << head << std::endl;
	Bureaucrat middle("P-bear", 3);
	std::cout << middle << std::endl;
	Form form("Confidential", 1, 1);
	std::cout << form << std::endl;
	Form form2("Classified", 2, 2);
	std::cout << form2 << std::endl;
	Form form3("Normal", 5, 5);
	std::cout << form3 << std::endl;

	std::cout << "===========normal case============" << std::endl;
	head.signForm(form);
	middle.signForm(form3);
	std::cout << "============already signed & grade not fit===============" << std::endl;
	try
	{
		middle.signForm(form);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		middle.signForm(form2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		form2.beSigned(middle);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		form3.beSigned(head);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "============wrong grade input===========" << std::endl;
	try
	{
		Form form4("wrong form", 151, 151);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Form form5("wrong form2", 0, 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
