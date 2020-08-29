/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/28 12:46:53 by jhur              #+#    #+#             */
/*   Updated: 2020/08/29 11:31:32 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "arguments invalid!" << std::endl;
		return 0;
	}
	Convert conv(argv[1]);
	conv.toChar();
	conv.toInt();
	conv.toFloat();
	conv.toDouble();
}
