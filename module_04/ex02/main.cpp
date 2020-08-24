/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 16:46:30 by jhur              #+#    #+#             */
/*   Updated: 2020/08/24 18:12:39 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include "AssaultTerminator.hpp"
#include "TacticalMarine.hpp"

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;
	return 0;
}

/*
============constructor==============
Tactical Marine ready for battle!$
* teleports from space *$
==============bob====================
For the holy PLOT!$
* attacks with a bolter *$
* attacks with a chainsword *$
==============jim=====================
This code is unclean. PURIFY IT!$
* does nothing *$
* attacks with chainfists *$
=============destructor===============
Aaargh...$
I'll be back...$
*/
