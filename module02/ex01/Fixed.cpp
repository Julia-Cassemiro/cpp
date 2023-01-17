/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 16:11:58 by jgomes-c          #+#    #+#             */
/*   Updated: 2022/11/05 16:11:58 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : _rawBit( 0 ) {
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed( const int raw) {
	std::cout << "Int constructor called" << std::endl;
	this->_rawBit = raw << Fixed::_bits; //It converts it to the corresponding fixed-point value.
	return ;
}

Fixed::Fixed( const float raw) {
	std::cout << "Float constructor called" << std::endl;
	this->_rawBit = roundf( raw * (1 << Fixed::_bits) ); //It converts it to the corresponding fixed-point value.
	return ;
}


Fixed::Fixed( Fixed const &fixed ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
	return ;
}

Fixed::~Fixed( void ) {
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed &	Fixed::operator=( Fixed const & rhs ) { //quando esse é chamado?
	std::cout << "Copy assignment operator called" << std::endl;

	this->_rawBit = rhs.getRawBits();
	return ( *this );
}

int		Fixed::getRawBits( void ) const { //that returns the raw value of the fixed-point value.
	return (this->_rawBit);
}

float	Fixed::toFloat( void ) const {
	return ( (float)this->_rawBit / (1 << Fixed::_bits) );
}

int		Fixed::toInt( void ) const {
	return ( this->_rawBit >> Fixed::_bits );
}

std::ostream & operator<<( std::ostream & out, Fixed const & rhs ) {
	out << rhs.toFloat();
	return ( out );
}

const int Fixed::_bits = 8;