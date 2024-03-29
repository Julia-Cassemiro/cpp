/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 15:33:13 by lpaulo-d          #+#    #+#             */
/*   Updated: 2023/04/26 03:35:55 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <ctime>

int main()
{
	{
		Span sp = Span(12);
		sp.addNumber(2);
		sp.addNumber(5);
		sp.addNumber(7);
		sp.addNumber(11);
		sp.addNumber(45);
		std::cout << "min: " << sp.shortestSpan() << std::endl;
		std::cout << "max: " << sp.longestSpan() << std::endl;

		int myArray[] = {0, 10, 15, 20, 25, 30};
		std::vector<int> vec(myArray, myArray + sizeof(myArray) / sizeof(int));
		sp.addNumber(vec.begin(), vec.end());
		std::cout << "After add some mores numbers" << std::endl;
		std::cout << "min: " << sp.shortestSpan() << std::endl;
		std::cout << "max: " << sp.longestSpan() << std::endl;
	}
	std::cout << std::endl;
	{
		Span sp(10000);
		for (int i = 0; i < 10000; i++)
		{
			srand(clock()); //aleatory with exec time
			sp.addNumber(rand()); //
		}
		std::cout << "test of pdf with 10 000: " << std::endl;
		std::cout << "min: " << sp.shortestSpan() << std::endl;
		std::cout << "max: " << sp.longestSpan() << std::endl;
	}
	std::cout << std::endl;
	{
		Span sp(200000);
		for (int i = 0; i < 200000; i++)
		{
			srand(clock());
			sp.addNumber(rand());
		}
		std::cout << "test with 200 000: " << std::endl;
		std::cout << "min: " << sp.shortestSpan() << std::endl;
		std::cout << "max: " << sp.longestSpan() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		std::cout << "test with array full " << std::endl;
		Span sp(5);
		int a[] = {3, 5, 6, 7, 900, 123, 8};
		std::vector<int> vec(a, a + sizeof(a) / sizeof(int));
		sp.addNumber(vec.begin(), vec.end());
		std::cout << "min: " << sp.shortestSpan() << std::endl;
		std::cout << "max: " << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Span sp(5);
		int a[] = {3,};
		std::vector<int> vec(a, a + sizeof(a) / sizeof(int));
		sp.addNumber(vec.begin(), vec.end());
		std::cout << "test with array size 1 " << std::endl;
		std::cout << "min: " << sp.shortestSpan() << std::endl;
		std::cout << "max: " << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}
