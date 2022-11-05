/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 19:10:23 by jgomes-c          #+#    #+#             */
/*   Updated: 2022/11/04 19:10:23 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_HPP
# define WRONG_CAT_HPP

#include <string>
#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

public:

	WrongCat( void );
	WrongCat( WrongCat const & rhs );
	~WrongCat( void );
	WrongCat & operator=( WrongCat const & rhs );

	void	makeSound( void ) const ;

};

#endif