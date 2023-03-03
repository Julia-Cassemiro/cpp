/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 14:34:23 by lpaulo-d          #+#    #+#             */
/*   Updated: 2023/03/03 02:47:31 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern( void ) {
	return ;
}

Intern::Intern( Intern const & rhs ) {
	*this = rhs;
	return ;
}

Intern::~Intern() {
	return ;
}

Intern &Intern::operator=( Intern const & rhs ) {
	(void)rhs;
	return ( *this );
}

AForm * Intern::_presidential( std::string target ) {
	AForm * form = new PresidentialPardonForm(target);
	std::cout << "Intern creates " << form->getName() << std::endl;
	return ( form );
}

AForm * Intern::_robotomy( std::string target ) {
	AForm * form = new RobotomyRequestForm(target);
	std::cout << "Intern creates " << form->getName() << std::endl;
	return ( form );
}
AForm * Intern::_shrubbery( std::string target ) {
	AForm * form = new ShrubberyCreationForm(target);
	std::cout << "Intern creates " << form->getName() << std::endl;
	return ( form );
}

AForm * Intern::_unknown( std::string target ) {
	(void)target;
	throw FormUnknown();
	return (NULL);
}

const char* Intern::FormUnknown::what( void ) const throw() {
	return ( "Form Unknown!!" );
}

const char* Intern::NoTarget::what( void ) const throw() {
	return ( "No target passed!!" );
}

AForm * Intern::makeForm( std::string formName, std::string target ) {
	if (target.empty())
	{
		throw NoTarget();
		return ( NULL );
	}
	AForm * ( Intern::*f[] ) ( std::string ) = { &Intern::_presidential, &Intern::_robotomy, &Intern::_shrubbery, &Intern::_unknown };
	std::string forms[] = { "presidential pardon", "robotomy request", "shrubbery creation" };
	for (int i = 0; i < 3; i++)
		if (forms[i] == formName)
			return ( ( this->*f[i] ) ( target ) );
	return ( ( this->*f[3] ) ( target ) );
}
