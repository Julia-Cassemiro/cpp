/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 01:15:43 by jgomes-c          #+#    #+#             */
/*   Updated: 2023/04/11 04:03:53 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//O objetivo desse exercício é praticar a implementação de uma classe template que manipula arrays de elementos de um tipo T, 
//de forma que o programa possa criar, copiar, atribuir e acessar esses elementos de maneira segura, 
//sem correr o risco de acessar memória não alocada ou alterar elementos de outros arrays sem intenção. 
//Além disso, é importante que a classe implemente a verificação de índices fora dos limites do array, 
//garantindo que o programa não falhe ou exiba resultados incorretos devido a esse tipo de erro.

#include <cstdlib>
#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**) {
	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}
	{
		std::cout << "*****************************************************" << std::endl;
		std::cout << "Values of original array" << std::endl;
		for ( int i = 0; i < 5; i++)
			std::cout << ' ' << mirror[i];
		std::cout << std::endl;
		std::cout << "*****************************************************" << std::endl;

		std::cout << "Values of my array" << std::endl;
		for ( int i = 0; i < 5; i++)
			std::cout << ' ' << numbers[i];
		std::cout << std::endl;
		std::cout << "*****************************************************" << std::endl;


	}
	//SCOPE
	{
		Array<int> tmp = numbers;
		std::cout << tmp[1] <<std::endl;
		Array<int> test(tmp);
		std::cout << test[1] <<std::endl;
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}
	try
	{
		numbers[-2] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
	}
	std::cout << numbers[0] <<std::endl;
	std::cout << numbers[1] <<std::endl;
	std::cout << numbers[2] <<std::endl;
	
	delete [] mirror;//
	{
		int * a = new int();
		std::cout << "teste do pdf = " << *a << std::endl;
		delete a;
	}
	return 0;
}
