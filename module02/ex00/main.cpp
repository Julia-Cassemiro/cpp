/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 16:11:47 by jgomes-c          #+#    #+#             */
/*   Updated: 2022/11/05 16:11:47 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*
		this module is just to learn how used the Orthodox Canonical Form

			When copy a object, all your data is copied, but and when workink with pointer for objects?
			the canonical form can helps with that

*/

int main( void ) {
	Fixed a;
	std::cout << "constructor" << std::endl;

	Fixed b( a );
	std::cout << "Copy constructor" << std::endl;

	Fixed c;
	std::cout << "Copy assignment operator " << std::endl;


	c = b;
	std::cout << "" << std::endl;

	std::cout << a.getRawBits() << std::endl; // that returns the raw value of the fixed-point value.
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	return (0);
}