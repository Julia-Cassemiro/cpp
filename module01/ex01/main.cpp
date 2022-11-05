/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 23:04:08 by jgomes-c          #+#    #+#             */
/*   Updated: 2022/11/01 23:04:08 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Utils.hpp"

int main(void)
{
	Utils utils;
	Zombie *zombies;

	utils = Utils();
	zombies = utils.zombieHorde(9, "Zombie Sound");
	for (int i = 0; i < 9; i++)
	{
		std::cout << " " << "Number of zombies in this horde:  " << i + 1 << "\n";
		zombies[i].announce();
	}
	delete[] zombies;
	return (0);
}