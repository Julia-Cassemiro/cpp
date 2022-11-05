/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 23:54:58 by jgomes-c          #+#    #+#             */
/*   Updated: 2022/11/01 23:54:58 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>


int main (void) {
	std::string 	variable;
	std::string*	stringPTR; //pointer
	std::string&	stringREF = variable; //reference

	variable = "HI THIS IS BRAIN";
	stringPTR = &variable;

	std::cout << "The memory address of the string variable: \n" << "   " << &variable << "\n" << std::endl;
	std::cout << "The memory address held by stringPTR: \n" << "   " << stringPTR << "\n"<< std::endl;
	std::cout << "The memory address held by stringREF: \n" << "   " << &stringREF << "\n"<< std::endl;
	
	std::cout << "The value of the string variable: \n" << "   " << variable << "\n"<< std::endl;
	std::cout << "The value pointed to by stringPTR: \n" << "   " << *stringPTR << "\n"<< std::endl;
	std::cout << "The value pointed to by stringREF: \n" << "   " << stringREF << "\n"<< std::endl;
	return (0);
}