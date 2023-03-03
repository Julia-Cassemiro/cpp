/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 12:27:21 by lpaulo-d          #+#    #+#             */
/*   Updated: 2023/03/03 02:24:32 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void ) : AForm( "RobotomyForm", 72, 45 ), _target( "Ze" )  {
	std::cout << "[RobotomyRequestForm] Default constructor called" << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm( std::string target )
	: AForm( "RobotomyForm", 72, 45 ), _target( target )  {
		std::cout << "[RobotomyRequestForm] Constructor called" << std::endl;
		return ;
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const& robo_instance )
	: AForm( "RobotomyForm", 72, 45 ) {
		std::cout << "[RobotomyRequestForm] Copy constructor called" << std::endl;
		*this = robo_instance;
		return ;
}

RobotomyRequestForm::~RobotomyRequestForm( void ) {
	std::cout << "[RobotomyRequestForm] Destructor AForm called" << std::endl;
	return ;
}

RobotomyRequestForm& RobotomyRequestForm::operator=( RobotomyRequestForm const& robo_instance ) {
	this->_target = robo_instance._target;
	return *this;
}

void RobotomyRequestForm::execute( Bureaucrat const& executor ) const {
	if ( this->mayExecute( executor ) == false )
		return ;

	std::cout << "ZZZZZZZZ BZZZZZZZZZ" << std::endl;
	srand(time(NULL));

	if ( rand() % 2 )
		std::cout << "The " << this->_target << " has been robotomized successfully" << std::endl;
	else
		std::cout << "The robotomy of " << this->_target << " failed" << std::endl;
	return ;
}
