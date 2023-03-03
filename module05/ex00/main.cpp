/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 03:18:17 by jgomes-c          #+#    #+#             */
/*   Updated: 2023/01/22 03:21:59 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include <iostream>

int	main( void )
{
	std::cout << std::endl;
	try {
		Bureaucrat gradeGood = Bureaucrat("Caio", 1);
		std::cout << gradeGood;
	} catch ( std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		Bureaucrat gradeBad = Bureaucrat("Caio", 151);
		std::cout << gradeBad;
	} catch ( std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		Bureaucrat gradeBad = Bureaucrat("Caio", 0);
		std::cout << gradeBad;
	} catch ( std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		Bureaucrat gradeGood = Bureaucrat("Caio", 1);
		std::cout << gradeGood;
		gradeGood.incrementGrade();
	} catch ( std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		Bureaucrat gradeGood = Bureaucrat("Caio", 150);
		std::cout << gradeGood;
		gradeGood.decrementGrade();
	} catch ( std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		Bureaucrat gradeBad = Bureaucrat("Caio", -30);
		std::cout << gradeBad;
	} catch ( std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	return ( 0 );
}
