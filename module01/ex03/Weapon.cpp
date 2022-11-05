/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 00:19:11 by jgomes-c          #+#    #+#             */
/*   Updated: 2022/11/02 00:19:11 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type ) : _type(type) {
	return ;
}

Weapon::~Weapon( void ) {
	return ;
}

const std::string&	Weapon::getType( void ) {
	return (this->_type);
}

void			Weapon::setType( std::string type ) {
	this->_type = type;
}