/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 21:32:38 by jgomes-c          #+#    #+#             */
/*   Updated: 2022/11/02 21:32:38 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {

private:

	int					_rawBit; //An integer to store the fixed-point number value
	static const int	_bits; //A static constant integer to store the number of fractional bits. Its value will always be the integer literal 8.

public:

	Fixed( void );
	Fixed( const Fixed &fixed );
	~Fixed( void );
	Fixed &	operator=( Fixed const & numb );

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

};

#endif