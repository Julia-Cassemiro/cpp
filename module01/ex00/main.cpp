/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 22:03:51 by jgomes-c          #+#    #+#             */
/*   Updated: 2022/11/01 22:03:51 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieUtils.hpp"

int	main( void ) {
	ZombieUtils utils = ZombieUtils();
	Zombie*	zombiePtr = utils.newZombie("Julia");
	zombiePtr->announce();
	utils.randomChump("Caio");
	delete zombiePtr; //delete use a ptr, and dont return a value
					  //Deallocates a block of memory.
	return (0);
}
