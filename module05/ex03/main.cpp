/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 23:38:48 by lpaulo-d          #+#    #+#             */
/*   Updated: 2023/03/03 02:51:48 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "AForm.hpp"

int main(void)
{
	{
		Intern someRandomIntern;
		AForm *rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		Bureaucrat grade = Bureaucrat("Grey", 1);
		rrf->beSigned(grade);
		grade.executeAForm(*rrf);
		delete rrf;
	}
	std::cout << std::endl;
	{
		Intern someRandomIntern;
		AForm *rrf;
		rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
		Bureaucrat grade = Bureaucrat("Grey", 1);
		rrf->beSigned(grade);
		rrf->execute(grade);
		delete rrf;
	}
	std::cout << std::endl;
	{
		Intern someRandomIntern;
		AForm *rrf;
		rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
		Bureaucrat grade = Bureaucrat("Grey", 1);
		rrf->beSigned(grade);
		rrf->execute(grade);
		delete rrf;
	}
	std::cout << std::endl;
	try
	{
		Intern someRandomIntern;
		AForm *rrf;
		rrf = someRandomIntern.makeForm(" creation", "Bender");
		delete rrf;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Intern someRandomIntern;
		AForm *rrf;
		rrf = someRandomIntern.makeForm(" creation", "");
		delete rrf;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
