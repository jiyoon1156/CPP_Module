/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 17:04:02 by jhur              #+#    #+#             */
/*   Updated: 2020/08/15 18:28:12 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char **argv)
{
	std::string filename;
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::ofstream	ofs;
	std::ifstream	ifs;
	std::string		line;


	if (argc != 4)
		return (0);
	ifs.open(argv[1]);
	if (!ifs.is_open())
		return (0);
	filename = std::string(argv[1]) + std::string(".replace");
	ofs.open(filename);
	if (!ofs.is_open())
		return (0);
	while (getline(ifs, line))
	{
		if (line.find(s1) != std::string::npos)
			line.replace(line.find(s1), s1.length(), s2);
		ofs << line << std::endl;
	}
	ifs.close();
	ofs.close();
	return (0);
}
