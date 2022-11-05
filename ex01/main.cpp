/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 21:12:54 by jgomes-c          #+#    #+#             */
/*   Updated: 2022/10/31 21:12:54 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <cstring>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main(void) {
	std::string command;
	PhoneBook phoneBook;

	do
	{
		std::cout << "<--------------------------------------------------------->" << std::endl;
		std::cout << "> ";
		std::getline(std::cin, command);
		if (command.compare("ADD") == 0)
			phoneBook.setNewContact();
		if (command.compare("SEARCH") == 0)
			phoneBook.searchContacts();
		if (command.compare("EXIT") == 0)
			break;
		command.clear();
	} while (true);
	
}
