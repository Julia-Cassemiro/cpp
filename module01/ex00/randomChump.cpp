/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 22:27:06 by jgomes-c          #+#    #+#             */
/*   Updated: 2022/11/01 22:27:06 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieUtils.hpp"

void	ZombieUtils::randomChump( std::string name ) {
	Zombie zombie = Zombie(name); //create new zombie

	zombie.announce(); //and do a annouce again
}
