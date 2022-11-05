/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 23:37:45 by jgomes-c          #+#    #+#             */
/*   Updated: 2022/11/01 23:37:45 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Utils.hpp"

Zombie* Utils::zombieHorde( int N, std::string name ) {
	Zombie* zombie;

	zombie = new Zombie[N]; //allocate N Zombie objects in a single allocation

		//it has to initialize the zombies, giving each one of them the name passed as parameter
	for (int i = 0; i < N; i++)
		zombie[i].setName(name);
	return (zombie);
}
