/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 10:39:19 by jhur              #+#    #+#             */
/*   Updated: 2020/08/25 16:16:30 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : _volume(0)
{
	for (int i = 0; i < 4; i++)
		this->srcs[i] = nullptr;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < this->_volume; i++)
		delete this->srcs[i];
}

MateriaSource::MateriaSource(MateriaSource const &copy) : _volume(0)
{
	for (int i = 0; i < copy._volume; i++)
		this->learnMateria(copy.srcs[i]->clone());
	for (int i = 0; i < 4; i++)
		this->srcs[i] = nullptr;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &ref)
{
	for (int i = 0; i < 4; i++)
		delete this->srcs[i];
	this->_volume = 0;
	for (int i = 0; i < ref._volume; i++)
		this->learnMateria(ref.srcs[i]->clone());
	for (int i = 0; i < 4; i++)
		this->srcs[i] = nullptr;
	return (*this);
}

void MateriaSource::learnMateria(AMateria *m)
{
	if (this->_volume > 3 || m == nullptr)
		return ;
	for (int i = 0; i < this->_volume; i++)
		if (this->srcs[i] == m)
			return ;
	this->srcs[this->_volume++] = m;
}

AMateria*	MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < this->_volume; i++)
		if (this->srcs[i]->getType() == type)
			return (this->srcs[i]->clone());
	return (nullptr);
}
