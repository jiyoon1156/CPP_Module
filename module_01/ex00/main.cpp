/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 11:51:29 by jhur              #+#    #+#             */
/*   Updated: 2020/08/12 13:23:52 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheHeap(void)
{
	Pony *pony;

	pony = new Pony();
	pony->setName("Jonathan");
	pony->setNickName("Jon");
	std::cout << "Pony's name is " << pony->getName() << std::endl;
	std::cout << "Pony's nickname is " << pony->getNickName() << std::endl;
	pony->sleeping();
	pony->eating();
	delete(pony);
}

void	ponyOnTheStack(void)
{
	Pony pony;

	pony.setName("Samantha");
	pony.setNickName("Sam");
	std::cout << "Pony's name is " << pony.getName() << std::endl;
	std::cout << "Pony's nickname is " << pony.getNickName() << std::endl;
	pony.sleeping();
	pony.eating();
}

int	main(void)
{
	std::cout << "==========Pony On the Heap==========" << std::endl;
	ponyOnTheHeap();
	std::cout << "==========Pony On the Stack==========" << std::endl;
	ponyOnTheStack();
	return (0);
}
