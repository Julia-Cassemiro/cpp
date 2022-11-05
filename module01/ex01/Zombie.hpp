/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 22:48:40 by jgomes-c          #+#    #+#             */
/*   Updated: 2022/11/01 22:48:40 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {

private:

	std::string	_name;

public:

	Zombie( void );
	~Zombie( void );

	void	setName( std::string name ); //before the class Zombie was instantiated with name, now it is used her
	void	announce( void );

};

#endif