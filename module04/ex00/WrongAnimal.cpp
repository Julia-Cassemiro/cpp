/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 19:11:21 by jgomes-c          #+#    #+#             */
/*   Updated: 2022/11/04 19:11:21 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) : _type( "Its a Robot" ) {
	std::cout << "Default constructor WrongAnimal called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal( WrongAnimal const & rhs ) {
	std::cout << "Copy constructor WrongAnimal called" << std::endl;
	*this = rhs;
	return ;
}

WrongAnimal::~WrongAnimal( void ) {
	std::cout << "Default destructor WrongAnimal called" << std::endl;
	return ;
}

WrongAnimal & WrongAnimal::operator=( WrongAnimal const & rhs ) {
	std::cout << "Copy assignment WrongAnimal operator called" << std::endl;
	this->_type = rhs._type;
	return ( *this );
}

void	WrongAnimal::makeSound( void ) const {
	std::cout << "I AM ROBOT" << std::endl;
	return ;
}

std::string		WrongAnimal::getType( void ) const {
	return (this->_type);
}
