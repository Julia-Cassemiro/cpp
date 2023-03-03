/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 03:20:29 by jgomes-c          #+#    #+#             */
/*   Updated: 2023/03/03 02:12:24 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main( void )
{
	std::cout << std::endl;
	try {
		std::cout << "SUCCESS\n" << std::endl;
		Form FormGood = Form("JobOpportunity", 1, 100);
		std::cout << FormGood;
	} catch ( std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		std::cout << "F A I L" << std::endl;
		Form formBad = Form("JobOpportunity", 1 ,151);
		std::cout << formBad;
	} catch ( std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		std::cout << "F A I L" << std::endl;
		Form formBad = Form("JobOpportunity", 0, 1);
		std::cout << formBad;
	} catch ( std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		std::cout << "SUCCESS\n" << std::endl;
		Form formGood = Form("JobOpportunity", 1, 100);
		const Bureaucrat grade = Bureaucrat( "Jão", 1);
		formGood.beSigned(grade);
		std::cout << formGood;
	} catch ( std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		std::cout << "F A I L" << std::endl;
		Form formGood = Form("JobOpportunity", 10, 150);
		const Bureaucrat grade = Bureaucrat( "Jão", 11);
		formGood.beSigned(grade);
		std::cout << formGood;
	} catch ( std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		std::cout << "F A I L" << std::endl;
		Form formBad = Form("JobOpportunity", -30, 15);
		std::cout << formBad;
	} catch ( std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		std::cout << " F  A  I  L bureucrat!" << std::endl;
		Form formBad = Form("JobOpportunity", 2, 15);
		Bureaucrat grade = Bureaucrat("Jão", 5);
		grade.signForm(formBad);
		std::cout << formBad;
		std::cout << grade;
	} catch ( std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		std::cout << " S  U  C  C  E  S  S bureucrat!" << std::endl;
		Form  formGood = Form("JobOpportunity", 1, 15);
		Bureaucrat grade = Bureaucrat("Jão", 1);
		formGood.beSigned(grade);
		grade.signForm(formGood);
		std::cout << formGood;
		std::cout << grade;
	} catch ( std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	return ( 0 );
}
