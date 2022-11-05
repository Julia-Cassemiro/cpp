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
# define FIXED_HPP

#include <iostream>

class Fixed {

private:

	int					_rawBit;
	static const int	_bits;

public:

	Fixed( void );
	Fixed( const Fixed &fixed );
	~Fixed( void );
	Fixed &	operator=( Fixed const & numb );

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

};

#endif