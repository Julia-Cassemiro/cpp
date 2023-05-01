/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 06:14:19 by jgomes-c          #+#    #+#             */
/*   Updated: 2023/05/01 07:18:20 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main( int argc, char **argv ){
	if (argc < 2){
		std::cout << "Error: Is necessary 2 arguments\n" << std::endl;
		return 1;
	}
	if (CheckInput(argc, argv) == false) {
		return 1;
	}
	PmergeMe(argc, argv);
	return 0;
}