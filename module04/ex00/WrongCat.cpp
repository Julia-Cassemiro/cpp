/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 19:11:59 by jgomes-c          #+#    #+#             */
/*   Updated: 2022/11/04 19:11:59 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ) {
	this->_type = "WrongCat";
	std::cout << "Default constructor WrongCat called" << std::endl;
	return ;
}

WrongCat::WrongCat( WrongCat const & rhs ) : WrongAnimal( rhs ){
	std::cout << "Copy constructor WrongCat called" << std::endl;
	*this = rhs;
	return ;
}

WrongCat::~WrongCat( void ) {
	std::cout << "Default destructor WrongCat called" << std::endl;
	return ;
}

WrongCat & WrongCat::operator=( WrongCat const & rhs ) {
	std::cout << "Copy assignment WrongCat operator called" << std::endl;
	this->_type = rhs._type;
	return ( *this );
}

void	WrongCat::makeSound( void ) const {
	std::cout << "Oinc oinc :3" << std::endl;
	return ;
}