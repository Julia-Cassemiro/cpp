/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 19:51:21 by coder             #+#    #+#             */
/*   Updated: 2022/10/06 19:51:27 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int main(void)
{
	Phonebook Phonebook;
	bool run;
	std::string command;

	Phonebook.show();
	run = true;
	while (run){
		std::cout << ">";
		std::getline(std::cin, command);
		if (command == "ADD")
			Phonebook.add();
		else if (command == "SEARCH")
			Phonebook.search();
	}
	
	
}