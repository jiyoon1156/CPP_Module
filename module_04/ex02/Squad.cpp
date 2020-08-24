/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 14:06:31 by jhur              #+#    #+#             */
/*   Updated: 2020/08/24 18:08:36 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad() : _numUnit(0), _unitPtr(nullptr)
{}

Squad::Squad(const Squad &copy) : _numUnit(0), _unitPtr(nullptr)
{
	// copy must be deep
	// 얕은 복사로 하면 소멸자에서 delete 시킬 때 이미 해제된 메모리를 또 해제시키려고 해서 오류가남
	// 생성자를 복사생성자로 똑같이 만들어주면 오류 해결
	this->_numUnit = 0;
	for (int i = 0; i < copy.getCount(); i++)
		this->push(copy.getUnit(i)->clone());
}

Squad::~Squad()
{
	if (this->_unitPtr)
	{
		for (int i = 0; i < this->_numUnit; i++)
			delete this->_unitPtr[i];
		delete this->_unitPtr;
	}
}

Squad &Squad::operator=(Squad const &ref)
{
	// if there was any unit in the Squad before,
	// they must be destroyed before being replaced
	if (this->_unitPtr)
	{
		for (int i = 0; i < this->_numUnit; i++)
			delete this->_unitPtr[i];
		delete this->_unitPtr;
		this->_unitPtr = nullptr;
	}
	this->_numUnit = 0;
	for (int i = 0; i < ref.getCount(); i++)
		this->push(ref.getUnit(i)->clone());
	return (*this);
}

int	Squad::getCount(void) const
{
	return (this->_numUnit);
}

ISpaceMarine*	Squad::getUnit(int idx) const
{
	if (idx > (this->_numUnit - 1) || idx < 0)
		return (nullptr);
	return (_unitPtr[idx]);
}

int	Squad::push(ISpaceMarine* AddUnit)
{
	ISpaceMarine** NewUnit;
	int i;

	NewUnit = new ISpaceMarine*[this->_numUnit + 1];
	for (i = 0; i < this->_numUnit; i++)
		NewUnit[i] = this->_unitPtr[i];
	NewUnit[i] = AddUnit;
	//freeing previous one
	if (this->_unitPtr != nullptr)
		delete[] _unitPtr;
	//pointing new one
	this->_unitPtr = NewUnit;
	return (this->_numUnit++);
}
