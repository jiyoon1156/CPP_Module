/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/29 14:07:40 by jhur              #+#    #+#             */
/*   Updated: 2020/08/29 14:47:27 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <random>

void	*serialize(void)
{
	char *store;
	std::string alphanum = "0123456789"\
							"abcdefghijklmopqrstuvxyz" \
							"ABCDEFGHIJKLMOPQRSTUVXYZ";

	store = new char[20];

	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> dis(0, 61);

	for (int i = 0; i < 8; i++)
		store[i] = alphanum[dis(gen)];

	*reinterpret_cast<int *>(store + 8) = rand();

	for (int i = 12; i < 20; i++)
		store[i] = alphanum[dis(gen)];
	return (store);
}

struct Data
{
	std::string s1;
	int n;
	std::string s2;
};

Data *deserialize(void * raw)
{
	Data *data = new Data;

	data->s1 = std::string(static_cast<char *>(raw), 8);
	data->n = *reinterpret_cast<int *>(static_cast<char *>(raw) + 8);
	data->s2 = std::string(static_cast<char *>(raw) + 12, 8);
	return (data);
}

int main()
{
	void *test = serialize();
	Data* data = deserialize(test);
	std::cout <<"s1: " << data->s1 << std::endl;
	std::cout <<"s2: " << data->s2 << std::endl;
	std::cout <<"n: " << data->n << std::endl;
	delete static_cast<char *>(test);
	delete data;
	return 0;
}
