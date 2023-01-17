/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 16:11:18 by jgomes-c          #+#    #+#             */
/*   Updated: 2022/11/05 16:11:18 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{

private:
	int _rawBit;
	static const int _bits;

public:
	Fixed(const int raw);	// A constructor that takes a constant integer as a parameter.
	Fixed(const float raw); // A constructor that takes a constant floating-point number as a parameter

	Fixed(void);
	Fixed(const Fixed &fixed);
	~Fixed(void);
	Fixed &operator=(Fixed const &numb);

	// operator
	bool operator>(Fixed const &rhs);
	bool operator<(Fixed const &rhs);
	bool operator>=(Fixed const &rhs);
	bool operator<=(Fixed const &rhs);
	bool operator==(Fixed const &rhs);
	bool operator!=(Fixed const &rhs);

	Fixed operator+(Fixed const &rhs);
	Fixed operator-(Fixed const &rhs);
	Fixed operator*(Fixed const &rhs);
	Fixed operator/(Fixed const &rhs);

	Fixed operator++(void);
	Fixed operator++(int);
	Fixed operator--(void);
	Fixed operator--(int);

	// four public overloaded member functions to your class:
	static Fixed &min(Fixed &rhs1, Fixed &rhs2); //reference =>  fixed-point number
	static const Fixed &min(Fixed const &rhs1, Fixed const &rhs2); //reference =>  constant fixed-point numbers
	static Fixed &max(Fixed &rhs1, Fixed &rhs2);
	static const Fixed &max(Fixed const &rhs1, Fixed const &rhs2);

	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const; // that converts the fixed-point value to a floating-point value.
	int toInt(void) const;	   // that converts the fixed-point value to an integer value
};

std::ostream &operator<<(std::ostream &out, Fixed const &rhs); // inserts a floating-point representation  of the fixed-point number into the output stream object passed as parameter

#endif