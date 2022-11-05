/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 00:17:37 by jgomes-c          #+#    #+#             */
/*   Updated: 2022/11/02 00:17:37 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon {

private:

	std::string	_type; //1 - A private attribute type, which is a string

public:

	Weapon( std::string type );
	~Weapon( void );

	const std::string&	getType( void ); //A getType() member function that returns a const reference to type. What is inside of this member
	void				setType( std::string type ); //A setType() member function that sets type using the new one passed as parameter. Set what is inside the

};

#endif