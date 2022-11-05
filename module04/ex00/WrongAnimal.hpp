/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 19:11:16 by jgomes-c          #+#    #+#             */
/*   Updated: 2022/11/04 19:11:16 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal {

protected:

	std::string	_type;

public:

	WrongAnimal( void );
	WrongAnimal( WrongAnimal const & rhs );
	~WrongAnimal( void );
	WrongAnimal & operator=( WrongAnimal const & rhs );

	void			makeSound( void ) const ;
	std::string		getType( void ) const;
};

#endif