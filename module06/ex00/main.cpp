/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 01:37:26 by jgomes-c          #+#    #+#             */
/*   Updated: 2023/01/21 01:37:26 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include <climits>
#include <limits>

void	convertToFloat( std::string str ) {
	//letra
	if (str.length() == 1 && isalpha(str[0])) {
		std::cout << "float: " << static_cast<float>(str[0]) << ".0f" << std::endl;
		return ;
	}

	double num = atof(str.c_str());
	if (num == 0 && str.length() != 1 && str[0] != '0') {
		std::cout << "float: nanf" << std::endl;
		return ;
	}

	if (num == std::numeric_limits<float>::infinity() && str[0] == '-')
		std::cout << "float: -inff" << std::endl;
	else if (num == std::numeric_limits<float>::infinity())
		std::cout << "float: +inff" << std::endl;
	else if ((long double)num == (int)num)
		std::cout << "float: " << num << ".0f" << std::endl;
	else
		std::cout << "float: " << num << "f" << std::endl;
}

void	convertToDouble( std::string str ) {
	if (str.length() == 1 && isalpha(str[0])) {
		std::cout << "double: " << static_cast<double>(str[0]) << ".0" << std::endl;
		return ;
	}

	double num = atof(str.c_str());
	if (str[0] != '0' && num == 0 && str.length() != 1) {
		std::cout << "double: nan" << std::endl;
		return ;
	}

	if (num == std::numeric_limits<double>::infinity() && str[0] == '-')
		std::cout << "double: -inf" << std::endl;
	else if (num == std::numeric_limits<double>::infinity())
		std::cout << "double: +inf" << std::endl;
	else if ((long double)num == (int)num)
		std::cout << "double: " << num << ".0" << std::endl;
	else
		std::cout << "double: " << num << std::endl;
}

void convertToInt(std::string str)
{
	// without cast will print string not integer
	if (str.length() == 1 && isalpha(str[0]))
	{
		std::cout << "int: " << static_cast<int>(str[0]) << std::endl; // convert o char to int
		return;
	}
	long int i = atol(str.c_str()); // Convert string to long integer
	if ((i != 0 && i >= INT_MIN && i <= INT_MAX) || (i == 0 && str.length() > 0 && str[0] == '0'))
	{
		std::cout << "int: " << i << std::endl;
	}
	else
		std::cout << "int: \'"
				  << "Impossible"
				  << "\'" << std::endl;
}

void convertToChar(std::string str)
{
	if (str.length() == 1 && isalpha(str[0]))
	{
		std::cout << "char: \'" << str << "\'" << std::endl;
		return;
	}
	else if (str.length() > 1 && isalpha(str[1]))
	{
		std::cout << "char: \'"
				  << "Impossible"
				  << "\'" << std::endl;
		return;
	}
	// cast for isprint remove .0f atoi return int convert to char
	char casted = static_cast<char>(std::atoi(str.c_str()));
	if (isprint(casted))
		std::cout << "char: \'" << casted << "\'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Wrong usage. Please white something like this" << std::endl;
		std::cout << "./Conversion 2 || ./Conversion a" << std::endl;
		return 1;
	}
	convertToChar(argv[1]);
	convertToInt(argv[1]);
	convertToFloat(argv[1]);
	convertToDouble(argv[1]);
	return 0;
}