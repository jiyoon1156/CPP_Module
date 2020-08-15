/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 14:51:24 by jhur              #+#    #+#             */
/*   Updated: 2020/08/15 16:56:39 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
#include <iostream>
#include <string>

class	Weapon
{
	private:
		std::string type;
	public:
		Weapon();
		Weapon(std::string club);
		//맨 앞 const는 반환값 변경x, 맨 뒤 const는 이 함수 안에서 멤버변수 변경x
		const std::string &getType(void);
		void setType(std::string club);
		~Weapon();
};

#endif
