/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 00:20:02 by jgomes-c          #+#    #+#             */
/*   Updated: 2022/11/02 00:20:02 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string	name, Weapon &weapon )
	: _name(name), _weapon(weapon) {
	return ;
}

HumanA::~HumanA( void ) {
	return ;
}

void		HumanA::attack( void ) {
	std::cout << this->_name << " Atacou com  "
		<< this->_weapon.getType() << std::endl;
}
