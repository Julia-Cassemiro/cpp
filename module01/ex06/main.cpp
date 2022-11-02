/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 01:20:23 by jgomes-c          #+#    #+#             */
/*   Updated: 2022/11/02 01:20:23 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main( int argc, char *argv[] ) {
	Harl instance = Harl();

	if (argc != 2)
	{
		std::cout << "Wrong parameters level!" << std::endl;
		return (1);
	}
	instance.complain(argv[1]);

	return (0);
}