/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 00:17:53 by jgomes-c          #+#    #+#             */
/*   Updated: 2022/11/02 00:17:53 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B
# define HUMAN_B

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB {

private:

	std::string	_name;
	Weapon		*_weapon;

public:

	HumanB( std::string	name );
	~HumanB( void );

	void		attack( void );
	void		setWeapon( Weapon &weapon );
};

#endif