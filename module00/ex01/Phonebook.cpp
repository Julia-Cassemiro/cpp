/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 21:19:27 by jgomes-c          #+#    #+#             */
/*   Updated: 2022/10/31 21:19:27 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	std::cout << "# PHONEBOOK ☜♡☞" << std::endl;
	std::cout << "# Enter with a command [ ADD, SEARCH, EXIT ]:" << std::endl;

	this->_currentId = 0;
	this->total = 0;
	return;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Thanks for using!" << std::endl;
	std::cout << "See ya!" << std::endl;
	return;
}

void			PhoneBook::setNewContact() {
	int	id;

	id = this->_currentId;
	this->_contacts[id].index = id + 1;
	this->_contacts[id].setFirstName();
	this->_contacts[id].setLastName();
	this->_contacts[id].setNickname();
	this->_contacts[id].setPhoneNumber();
	this->_contacts[id].setDarkestSecret();
	this->setCurrentId(1);
	if (this->total < 8)
		this->total++;
}

void		PhoneBook::setCurrentId(int id) {
	if (this->_currentId == 7)
		this->_currentId = 0;
	else
		this->_currentId += id;
}

void		PhoneBook::printAllContacts() {
	this->_contacts[0].printHeader();
	for (int i = 0; i < this->total; i++)
		this->_contacts[i].printContact();
}


void		PhoneBook::searchContacts() {
	std::string	i;
	int			id;
	char 		str[500];

	std::cout << "Contacts <('.'<) \n" << std::endl;
	PhoneBook::printAllContacts();
	do {
		std::cout << "aaaaa: ";
		std::getline(std::cin, i);
		std::size_t len = i.copy(str, 1, 0);
		str[len] = '\0';
		id = atoi(str);
		if ((id < 1 || id > this->total))
			std::cout << "Wrong bbbb!" << std::endl;
		else
			break ;
	}
	while (true);
	std::cout << "<--------------------------------------------------------->" << std::endl;
	this->_contacts[id - 1].printContactFull();
}