/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 14:37:49 by jgomes-c          #+#    #+#             */
/*   Updated: 2022/11/05 14:37:49 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "./ex02/ex01/Form.hpp"

int	main( void )
{
	{
		std::cout << " ** TEST FORM ROBOTOMY ** \n" << std::endl;

		Intern Intern;
		Form* form;
		form = Intern.makeForm("robotomy request", "Julia");
		Bureaucrat grade = Bureaucrat("Caio", 1);
		form->beSigned( grade );
		grade.executeForm( *form );
		delete form;
	}
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	{
		std::cout << " ** TEST FORM PRESIDENTIAL ** \n" << std::endl;
		Intern Intern;
		Form* form;
		form = Intern.makeForm("presidential pardon", "Julia");
		Bureaucrat grade = Bureaucrat("Caio", 1);
		form->beSigned( grade );
		form->execute( grade );
		delete form;
	}
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	{
		std::cout << " ** TEST FORM SHRUBBERY ** \n" << std::endl;
		Intern Intern;
		Form* form;
		form = Intern.makeForm("shrubbery creation", "Julia");
		Bureaucrat grade = Bureaucrat("Caio", 1);
		form->beSigned( grade );
		form->execute( grade );
		delete form;
	}
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	try	{
		std::cout << " ** TEST UNKNOWN FORM **\n" << std::endl;

		Intern Intern;
		Form* form;
		form = Intern.makeForm(" JUSTINbb", "Julia");
		delete form;
	} catch ( std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	try	{
		std::cout << " ** TEST EMPTY TARGET **\n" << std::endl;

		Intern Intern;
		Form* form;
		form = Intern.makeForm(" JUSTINbb", "");
		delete form;
	} catch ( std::exception & e) {
		std::cout << e.what() << std::endl;
	}
}