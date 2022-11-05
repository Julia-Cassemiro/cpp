/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 00:20:06 by jgomes-c          #+#    #+#             */
/*   Updated: 2022/11/02 00:20:06 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string	name ) : _name(name) {
	return ;
}

HumanB::~HumanB( void ) {
	return ;
}

void		HumanB::attack( void ) {
	std::cout << this->_name << " attacks with their "
		<< this->_weapon->getType() << std::endl;
}

void		HumanB::setWeapon( Weapon &weapon ) {
	this->_weapon = &weapon;
}
