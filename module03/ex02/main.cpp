/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 01:35:21 by jgomes-c          #+#    #+#             */
/*   Updated: 2022/11/05 01:35:21 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
	FragTrap art("Julia");
	std::cout << "\n"
			  << std::endl;
	art.attack("Caio");
	std::cout << "\n"
			  << std::endl;

	art.takeDamage(3);
	std::cout << "\n"
			  << std::endl;
	art.takeDamage(50);
	std::cout << "\n"
			  << std::endl;
	art.beRepaired(3);
	std::cout << "\n"
			  << std::endl;
	art.highFivesGuys();
	std::cout << "\n"
			  << std::endl;
	art.takeDamage(50);
	std::cout << "\n"
			  << std::endl;
	return (0);
}