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

int	main( void ) {
	Harl instance = Harl();

	std::cout << "DEBUG" << std::endl;
	instance.complain("DEBUG");
	std::cout << "INFO" << std::endl;
	instance.complain("INFO");
	std::cout << "WARNING" << std::endl;
	instance.complain("WARNING");
	std::cout << "ERROR" << std::endl;
	instance.complain("ERROR");

	return (0);
}