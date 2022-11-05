/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 22:17:00 by jgomes-c          #+#    #+#             */
/*   Updated: 2022/11/01 22:17:00 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieUtils.hpp"

Zombie*	ZombieUtils::newZombie( std::string name ) {
	return ( new Zombie( name ) );
}