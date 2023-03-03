/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 00:04:37 by lpaulo-d          #+#    #+#             */
/*   Updated: 2023/03/03 02:19:37 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm( void ) : _name("Inacio"), _signed( false ), _gradeRequired( 150 ), _gradeExec( 150 ) {
	std::cout << "[AForm] Default constructor called" << std::endl;
	return ;
}

AForm::AForm( std::string name, int gradeRequired, int gradeExec ) : _name( name),
	_signed( false ), _gradeRequired( gradeRequired ), _gradeExec( gradeExec) {
	std::cout << "[AForm] Constructor called" << std::endl;
	if ( this->_gradeExec < 1 || this->_gradeRequired < 1 )
		throw AForm::GradeTooHighException();
	else if (this->_gradeExec > 150 || this->_gradeRequired > 150)
		throw AForm::GradeTooLowException();
	return ;
}

AForm::~AForm( void ) {
	std::cout << "[AForm] Default destructor AForm called" << std::endl;
	return ;
}

AForm::AForm( AForm const& Aform_instance )
	: _name( Aform_instance.getName() ), _signed( Aform_instance.getSigned() ),
	_gradeRequired( Aform_instance.getGradeRequired() ), _gradeExec( Aform_instance.getGradeExec() ){
	std::cout << "[AForm] Copy constructor Bureaucrat called" << std::endl;
	*this = Aform_instance;
	return ;
}



AForm & AForm::operator=( AForm const & rhs ) {
	std::cout << "copy operator AForm called" << std::endl;
	this->_signed = rhs.getSigned();
	return ( *this );
}

const char* AForm::GradeTooHighException::what( void ) const throw() {
	return ( "Grade is to high!!" );
}

const char* AForm::GradeTooLowException::what( void ) const throw() {
	return ( "Grade is to low!!" );
}

std::string	AForm::getName( void ) const {
	return ( this->_name );
}

int			AForm::getGradeRequired( void ) const {
	return ( this->_gradeRequired );
}

int			AForm::getGradeExec( void ) const {
	return ( this->_gradeExec );
}

bool		AForm::getSigned( void ) const {
	return ( this->_signed );
}

void		AForm::beSigned( Bureaucrat const & bureaucrat ) {
	if (bureaucrat.getGrade() <= this->_gradeRequired)
		this->_signed = true;
	else
		throw AForm::GradeTooLowException();
}

const char* AForm::AFormNotSignedException::what( void ) const throw() {
	return "AForm is not Signed";
}

bool AForm::mayExecute(const Bureaucrat &executor) const {
	if ( this->_signed == true ) {
		if ( executor.getGrade() <= this->_gradeExec )
			return true;
		else
			throw AForm::GradeTooLowException();
	}
	else
		throw AForm::AFormNotSignedException();
	return false;
}

std::ostream& operator<<( std::ostream& o, AForm const& Aform_instance ) {
	o << "Name: " << Aform_instance.getName() << std::endl;
	o << "Signed: " << Aform_instance.getSigned() << std::endl;
	o << "Grade Exec: " << Aform_instance.getGradeExec() << std::endl;
	o << "Grade required: " << Aform_instance.getGradeRequired() << std::endl;
	return ( o );
}
