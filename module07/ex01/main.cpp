/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 00:54:09 by jgomes-c          #+#    #+#             */
/*   Updated: 2023/04/01 18:00:11 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "iter.hpp"

int	main( void ) {
	//string
	{
		std::string arr[] = {"hello", "world", "Ecole", "Teste"};
		size_t size = sizeof(arr) / sizeof(arr[0]);

		iter(arr, size, &print_something);
	}
	//int
	{
		int	arr1[] = { 1, 2, 3, 4, 5 };

		std::cout << "arr1: " << std::endl;
		iter(arr1, sizeof(arr1)/sizeof(arr1[0]), &print_something);
	}
	//double
	{	double	arr2[] = { 1.5, 0.2, 3.82, 4.1, 9.5 };

		std::cout << "arr2: " << std::endl;
		iter(arr2, sizeof(arr2)/sizeof(arr2[0]), &print_something);
	}
	//char
	{
		char	arr3[] = { 'J', 'u', '!', 'i', '4' };

		std::cout << "arr3: " << std::endl;
		iter(arr3, sizeof(arr3)/sizeof(arr3[0]), &print_something);
	}
	return (0);
}
