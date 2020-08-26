/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 10:39:23 by jhur              #+#    #+#             */
/*   Updated: 2020/08/25 12:33:19 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
#include "IMateriaSource.hpp"
#include <iostream>
#include <string>

class MateriaSource : public IMateriaSource
{
	private:
		AMateria*	srcs[4];
		int			_volume;
	public:
		MateriaSource();
		~MateriaSource();
		MateriaSource(MateriaSource const &copy);
		MateriaSource &operator=(MateriaSource const &ref);
		void		learnMateria(AMateria* m);
		AMateria*	createMateria(std::string const &type);
};

#endif
