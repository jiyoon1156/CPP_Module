/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/29 15:04:11 by jhur              #+#    #+#             */
/*   Updated: 2020/08/29 15:18:43 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <random>

Base *generate(void)
{
	int rd = random() % 30;

	if (rd > 20)
		return (new A);
	if (rd > 10)
		return (new B);
	return (new C);
}

//Base *p(arent)
void identify_from_pointer(Base *p)
{
	if (dynamic_cast<A *>(p) != nullptr)
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p) != nullptr)
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p) != nullptr)
		std::cout << "C" << std::endl;
}

void identify_from_reference(Base &p)
{
	identify_from_pointer(&p);
}

int main()
{
	Base *q;
	Base *r;
	Base *s;

	q = generate();
	r = generate();
	s = generate();

	identify_from_pointer(q);
	identify_from_reference(*q);
	identify_from_pointer(r);
	identify_from_reference(*r);
	identify_from_pointer(s);
	identify_from_reference(*s);
	return 0;
}
