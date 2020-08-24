/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 14:06:34 by jhur              #+#    #+#             */
/*   Updated: 2020/08/24 17:16:37 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP
#include "ISquad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

class	Squad : public ISquad
{
	private:
		int _numUnit;
		ISpaceMarine **_unitPtr;
	public:
		Squad();
		Squad(const Squad& copy);
		Squad& operator=(const Squad& ref);
		~Squad();
		virtual int getCount(void) const;
		virtual ISpaceMarine* getUnit(int idx) const;
		virtual int push(ISpaceMarine* AddUnit);
};

#endif
