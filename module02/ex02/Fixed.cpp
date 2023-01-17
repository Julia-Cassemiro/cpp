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
	// std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed( const int raw) {
	// std::cout << "Int constructor called" << std::endl;
	this->_rawBit = raw << Fixed::_bits; //It converts it to the corresponding fixed-point value.
	return ;
}

Fixed::Fixed( const float raw) {
	// std::cout << "Float constructor called" << std::endl;
	this->_rawBit = roundf( raw * (1 << Fixed::_bits) ); //It converts it to the corresponding fixed-point value.
	return ;
}


Fixed::Fixed( Fixed const &fixed ) {
	// std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
	return ;
}

Fixed::~Fixed( void ) {
	// std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed &	Fixed::operator=( Fixed const & rhs ) { //quando esse é chamado?
	// std::cout << "Copy assignment operator called" << std::endl;

	this->_rawBit = rhs.getRawBits();
	return ( *this );
}

int		Fixed::getRawBits( void ) const { //that returns the raw value of the fixed-point value.
	return (this->_rawBit);
}

void	Fixed::setRawBits( int const raw ) {
	this->_rawBit = raw;
	return ;
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


/*
A member function int getRawBits( void ) const;
that returns the raw value of the fixed-point value
*/

bool Fixed::operator>( Fixed const & rhs ) {
	return ( this->getRawBits( ) > rhs.getRawBits( ) );
}

bool Fixed::operator<( Fixed const & rhs ) {
	return ( this->getRawBits( ) < rhs.getRawBits( ) );
}

bool Fixed::operator>=( Fixed const & rhs ) {
	return ( this->getRawBits( ) >= rhs.getRawBits( ) );
}

bool Fixed::operator<=( Fixed const & rhs ) {
	return ( this->getRawBits( ) <= rhs.getRawBits( ) );
}

bool Fixed::operator==( Fixed const & rhs ) {
	return ( this->getRawBits( ) == rhs.getRawBits( ) );
}

bool Fixed::operator!=( Fixed const & rhs ) {
	return ( this->getRawBits( ) != rhs.getRawBits( ) );


}

/*
A member function void setRawBits( int const raw );
that sets the raw value of the fixed-point number.
*/

Fixed Fixed::operator+( Fixed const & rhs ) {
	Fixed tmp;
	tmp.setRawBits( this->getRawBits( ) + rhs.getRawBits( ) );
	return ( tmp );
}

Fixed Fixed::operator-( Fixed const & rhs ) {
	Fixed tmp;
	tmp.setRawBits( this->getRawBits( ) - rhs.getRawBits( ) );
	return ( tmp );
}

Fixed Fixed::operator*( Fixed const & rhs ) {
	Fixed tmp;
	tmp.setRawBits( this->getRawBits( ) * rhs.getRawBits( ) >> Fixed::_bits );
	return ( tmp );
}

Fixed Fixed::operator/( Fixed const & rhs ) {
	Fixed tmp;
	tmp.setRawBits( this->getRawBits( ) / rhs.getRawBits( ) << Fixed::_bits );
	return ( tmp );
}

/*
just increment or decrement
*/

Fixed Fixed::operator++( void ) {
	Fixed tmp;
	tmp._rawBit = ++_rawBit;
	return ( tmp );
}

Fixed Fixed::operator++( int ) {
	Fixed tmp;
	tmp._rawBit = _rawBit++;
	return ( tmp );
}

Fixed Fixed::operator--( void ) {
	Fixed tmp;
	tmp._rawBit = --_rawBit;
	return ( tmp );
}

Fixed Fixed::operator--( int ) {
	Fixed tmp;
	tmp._rawBit = _rawBit--;
	return ( tmp );
}

/*
takes as parameters two references on fixed-point
numbers or constanst member function, and return big or small
*/

Fixed & Fixed::min( Fixed & rhs1, Fixed & rhs2 ) {
	if (rhs1.getRawBits( ) < rhs2.getRawBits( ))
		return ( rhs1 );
	return ( rhs2 );
}

const Fixed & Fixed::min( Fixed const & rhs1, Fixed const & rhs2 ) {
	if (rhs1.getRawBits( ) < rhs2.getRawBits( ))
		return ( rhs1 );
	return ( rhs2 );
}

Fixed & Fixed::max( Fixed & rhs1, Fixed & rhs2 ) {
	if (rhs1.getRawBits( ) > rhs2.getRawBits( ))
		return ( rhs1 );
	return ( rhs2 );
}

const Fixed & Fixed::max( Fixed const & rhs1, Fixed const & rhs2 ) {
	if (rhs1.getRawBits( ) > rhs2.getRawBits( ))
		return ( rhs1 );
	return ( rhs2 );
}

const int Fixed::_bits = 8;