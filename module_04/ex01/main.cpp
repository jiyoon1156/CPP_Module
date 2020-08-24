/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/23 17:45:33 by jhur              #+#    #+#             */
/*   Updated: 2020/08/24 13:02:58 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "Enemy.hpp"
#include "Character.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"

int main()
{
	std::cout << "==============DEFAULT TEST==================" << std::endl;
	Character* me = new Character("me");
	std::cout << *me;
	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	delete me;
	std::cout << "==============ADDITIONAL TEST1==================" << std::endl;
	Character CaptainMarvel("Marvel");

	// Enemy* SuperMan = new SuperMutant();
	Enemy* SuperMan = new Enemy(100, "Superman");
	CaptainMarvel.equip(pr);
	std::cout << CaptainMarvel;
	CaptainMarvel.equip(pf);
	std::cout << CaptainMarvel;
	CaptainMarvel.equip(NULL);
	std::cout << CaptainMarvel;

	CaptainMarvel.attack(SuperMan);
	std::cout << "Superman's HP : " << SuperMan->getHP() << std::endl;
	CaptainMarvel.equip(pr);
	CaptainMarvel.attack(SuperMan);
	std::cout << "Superman's HP : " << SuperMan->getHP() << std::endl;
	CaptainMarvel.equip(pf);
	CaptainMarvel.attack(SuperMan);
	std::cout << "Superman's HP : " << SuperMan->getHP() << std::endl;
	std::cout << "==============ADDITIONAL TEST2==================" << std::endl;
	//copy constructor used, so construction msg appear only once
	RadScorpion rs;
	RadScorpion rs2(rs);
	std::cout << rs.getType() << " " << rs2.getType() << std::endl;
	rs2 = rs;
	std::cout << rs.getType() << " " << rs2.getType() << std::endl;
	//construction msg has to appear twice
	SuperMutant sm;
	SuperMutant sm2;
	std::cout << sm.getType() << " " << sm2.getType() << std::endl;
	sm2 = sm;
	std::cout << sm.getType() << " " << sm2.getType() << std::endl;
	return 0;
}
