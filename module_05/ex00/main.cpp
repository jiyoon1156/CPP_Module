/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/27 10:31:56 by jhur              #+#    #+#             */
/*   Updated: 2020/08/27 11:58:57 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	std::cout << "===============normal case====================" << std::endl;
	Bureaucrat bureau("staff", 50);
	std::cout << bureau << std::endl;
	bureau.incrementGrade();
	std::cout << bureau << std::endl;
	bureau.decrementGrade();
	std::cout << bureau << std::endl;
	std::cout << "===============Grade Too High Exception====================" << std::endl;
	try
	{
		Bureaucrat head("Dall", 0);
		std::cout << head << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Bureaucrat head("Dall", 1);
		std::cout << head << std::endl;
		head.incrementGrade();
		std::cout << head << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "===============Grade Too Low Exception====================" << std::endl;
	try
	{
		Bureaucrat tail("jhur", 151);
		std::cout << tail << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat tail("jhur", 150);
		std::cout << tail << std::endl;
		tail.decrementGrade();
		std::cout << tail << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
