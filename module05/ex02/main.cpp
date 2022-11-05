/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 11:58:00 by jgomes-c          #+#    #+#             */
/*   Updated: 2022/11/05 11:58:00 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "./ex01/ex00/Bureaucrat.hpp"

int main(void)
{
	std::cout << std::endl;
	std::cout << "Execução Shrubberry! " << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	try
	{
		std::cout << "SUCCESS\n" << std::endl;
		ShrubberyCreationForm form("Cool");
		Bureaucrat grade = Bureaucrat("Mr: Rossa", 1);
		form.beSigned(grade);
		form.execute(grade);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		std::cout << "FAIL TEST" << std::endl;
		ShrubberyCreationForm form("Juju");
		Bureaucrat grade = Bureaucrat("Mr: RossRoss", 150);
		form.beSigned(grade);
		form.execute( grade );
	} catch ( std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		std::cout << "FAIL TEST!" << std::endl;
		ShrubberyCreationForm form("Grey");
		Bureaucrat grade = Bureaucrat("Mr: Ross", 1);
		form.execute( grade );
	} catch ( std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		std::cout << "FAIL TEST!" << std::endl;
		ShrubberyCreationForm form("Grey");
		Bureaucrat grade = Bureaucrat("Mr: Ross", 150);
		form.beSigned(grade);
		grade.executeForm( form );
	} catch ( std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Execução Robotomy! " << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	try {
		std::cout << "50/50" << std::endl;
		RobotomyRequestForm form("Monica");
		Bureaucrat grade = Bureaucrat("Mr: Ross", 1);
		form.beSigned(grade);
		grade.executeForm( form );
	} catch ( std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		std::cout << "50/50" << std::endl;
		RobotomyRequestForm form("Monica");
		Bureaucrat grade = Bureaucrat("Mr: Ross", 1);
		form.beSigned(grade);
		form.execute( grade );
	} catch ( std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		std::cout << "FAIL TEST!" << std::endl;
		RobotomyRequestForm form("Monica");
		Bureaucrat grade = Bureaucrat("Mr: Ross", 150);
		form.beSigned(grade);
		form.execute( grade );
	} catch ( std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		std::cout << "FAIL TEST!" << std::endl;
		RobotomyRequestForm form("Monica");
		Bureaucrat grade = Bureaucrat("Mr: Ross", 150);
		form.beSigned(grade);
		grade.executeForm( form );
	} catch ( std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Execução Presidential! " << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	
	try {
		std::cout << "SUCCESS" << std::endl;
		PresidentialPardonForm form("Chandler");
		Bureaucrat grade = Bureaucrat("Mr: Ross", 1);
		form.beSigned(grade);
		grade.executeForm( form );
	} catch ( std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		std::cout << "SUCCESS" << std::endl;
		PresidentialPardonForm form("Chandler");
		Bureaucrat grade = Bureaucrat("Mr: Ross", 1);
		form.beSigned(grade);
		form.execute( grade );
	} catch ( std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		std::cout << "FAIL!!" << std::endl;
		PresidentialPardonForm form("Chandler");
		Bureaucrat grade = Bureaucrat("Mr: Ross", 150);
		form.beSigned(grade);
		form.execute( grade );
	} catch ( std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
		try {
		std::cout << "FAIL!!" << std::endl;
		PresidentialPardonForm form("Chandler");
		Bureaucrat grade = Bureaucrat("Mr: Ross", 150);
		form.beSigned(grade);
		grade.executeForm( form );
	} catch ( std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << std::endl;
	return ( 0 );
}