/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 00:18:07 by jgomes-c          #+#    #+#             */
/*   Updated: 2022/11/02 00:18:07 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A
# define HUMAN_A

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanA {

private:

	std::string	_name;
	Weapon		&_weapon;

public:

	HumanA( std::string name, Weapon &weapon );
	~HumanA( void );

	void		attack( void );

};

#endif