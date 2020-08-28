/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 20:19:07 by jhur              #+#    #+#             */
/*   Updated: 2020/08/28 09:59:55 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main()
{
	std::cout << "==================Default test======================" << std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	std::cout << "==================Additional test======================" << std::endl;
	IMateriaSource* src2 = new MateriaSource();
	src2->learnMateria(new Ice());
	src2->learnMateria(new Cure());

	ICharacter* you = new Character("you");

	AMateria* tmp2 = nullptr;
	AMateria* first = nullptr;
	tmp2 = src2->createMateria("fire");
	you->equip(tmp2);
	tmp2 = src2->createMateria("ice");
	first = tmp2;
	you->equip(tmp2);
	tmp2 = src2->createMateria("cure");
	you->equip(tmp2);
	you->equip(tmp2);
	tmp2 = src2->createMateria("cure");
	you->equip(tmp2);
	tmp2 = src2->createMateria("ice");
	you->equip(tmp2);
	tmp2 = src2->createMateria("ice");
	you->equip(tmp2);
	delete tmp2;
	you->equip(nullptr);

	ICharacter* abob = new Character("abob");
	you->equip(first);
	std::cout << "materia exp: " << first->getXP() << std::endl;
	std::cout << "aaaaaaaaaaaaaaa" << std::endl;
	you->use(-1, *abob);
	std::cout << "materia exp: " << first->getXP() << std::endl;
	std::cout << "aaaaaaaaaaaaaaa" << std::endl;
	you->use(0, *abob);
	std::cout << "materia exp: " << first->getXP() << std::endl;
	std::cout << "aaaaaaaaaaaaaaa" << std::endl;
	you->use(1, *abob);
	std::cout << "aaaaaaaaaaaaaaa" << std::endl;
	you->use(2, *abob);
	std::cout << "aaaaaaaaaaaaaaa" << std::endl;
	you->use(3, *abob);
	std::cout << "aaaaaaaaaaaaaaa" << std::endl;
	you->use(4, *abob);
	std::cout << "aaaaaaaaaaaaaaa" << std::endl;
	you->unequip(0);
	std::cout << "materia exp: " << first->getXP() << std::endl;
	you->use(0, *abob);
	you->use(2, *abob);
	std::cout << "materia exp: " << first->getXP() << std::endl;
	you->unequip(-1);


	delete abob;
	delete you;
	delete src2;
	return 0;
}
