/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 03:19:38 by jgomes-c          #+#    #+#             */
/*   Updated: 2023/03/03 02:10:28 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( std::string name, unsigned int grade ) : _name( name ) {
	std::cout << "[Bureaucrat] Default constructor called" << std::endl;

	if ( grade < 1 )
		throw Bureaucrat::GradeTooHighException();
	else if ( grade > 150 )
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade = grade;
	return ;
}

Bureaucrat::~Bureaucrat( void ) {
	std::cout << "[Bureaucrat] Default destructor called" << std::endl;
	return ;
}

std::string Bureaucrat::getName( void ) const{
	return ( this->_name );
}

unsigned int Bureaucrat::getGrade( void ) const{
	return ( this->_grade );
}

void Bureaucrat::incrementGrade( void ) {
	if ( this->_grade == 1 )
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade--;
}

void Bureaucrat::decrementGrade( void ) {
	if ( this->_grade == 150 )
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade++;
}

const char* Bureaucrat::GradeTooHighException::what( void ) const throw() {
	return ( "Bureaucrat grade is to high!!" );
}

const char* Bureaucrat::GradeTooLowException::what( void ) const throw() {
	return ( "Bureaucrat grade is to low!!" );
}

std::ostream & operator<<( std::ostream& o, Bureaucrat const & rhs ) {
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << "." << std::endl;
	return ( o );
}

void Bureaucrat::signForm( Form& form ) {
	try {
		form.beSigned( *this );
		std::cout << this->_name << " signed " << form.getName() << std::endl;
	} catch( std::exception & e ) {
		std::cout << this->_name << " couldn't sign " << form.getName()
			<< " because " << e.what() << std::endl;
	}
}
