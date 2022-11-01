/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 21:26:33 by jgomes-c          #+#    #+#             */
/*   Updated: 2022/10/31 21:26:33 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) {
	return ;
}

Contact::~Contact(void) {
	return ;
}

void	Contact::setFirstName() {
	std::string	name;

	while (true)
	{
		std::cout << "FirstName: ";
		std::getline(std::cin, name);
		if (name.length() <= 1)
			std::cout << "Incorrect FirstName!" << std::endl;
		else
			break ;
	}
	this->_firstName = name;
	name.clear();
}

void	Contact::setLastName() {
	std::string lastName;

	while (true)
	{
		std::cout << "LastName: ";
		std::getline(std::cin, lastName);
		if (lastName.length() <= 1)
			std::cout << "Incorrect LastName!" << std::endl;
		else
			break ;
	}
	this->_lastName = lastName;
	lastName.clear();
}

void	Contact::setPhoneNumber() {
	std::string	number;

	while (true)
	{
		std::cout << "PhoneNumber: ";
		std::getline(std::cin, number);
		if (isOnlyDigit(number) == false)
			std::cout << "Is not a valid phone number!" << std::endl;
		else
			break ;
	}
	this->_phoneNumber = number;
	number.clear();
}
void	Contact::setNickname() {
	std::string nickName;

	while (true)
	{
		std::cout << "NickName: ";
		std::getline(std::cin, nickName);
		break ;
	}
	this->_nickname = nickName;
	nickName.clear();
}

void	Contact::setDarkestSecret() {
	std::string secret;

	while (true)
	{
		std::cout << "DarkestSecret: ";
		std::getline(std::cin, secret);
		if (secret.length() <= 1)
			std::cout << "Incorrect DarkestSecret!" << std::endl;
		else
			break ;
	}
	this->_darkestSecret = secret;
	secret.clear();
}




void	Contact::printHeader()  {
	std::cout << std::right <<
		'|' << std::setw(5) << "index" <<
		'|' << std::setw(10) << "FirstName" <<
		'|' << std::setw(10) << "LastName" <<
		'|' << std::setw(10) << "Nickname" << "|" << std::endl;
}

void	Contact::printContact() {
	std::cout <<
		"|" << std::setw(5) << this->index <<
		"|" << std::setw(10) << resizeAtributteToPrint(this->_firstName) <<
		"|" << std::setw(10) << resizeAtributteToPrint(this->_lastName) <<
		"|" << std::setw(10) << resizeAtributteToPrint(this->_nickname) << "|" << std::endl;
}

bool	Contact::isOnlyDigit(std::string str) {
	for (int i = 0; str[i]; i++) {
		if (!isdigit(str[i]))
			return (false);
	}
	return (true);
}

std::string	Contact::resizeAtributteToPrint(std::string str) {
	std::string	newStr;
	if (str.length() > 10)
	{
		newStr = str.substr(0, 10);
		newStr[9] = '.';
		return (newStr);
	}
	return (str);
}

void	Contact::printContactFull() {
	std::cout << "************************************************************" << std::endl;
	std::cout << "Index: " << this->index << std::endl;
	std::cout << "FirstName: " << this->_firstName << std::endl;
	std::cout << "LastName: " << this->_lastName << std::endl;
	std::cout << "NickName: " << this->_nickname << std::endl;
	std::cout << "Number: " << this->_phoneNumber << std::endl;
	std::cout << "Darkest: " << this->_darkestSecret << std::endl;
	std::cout << "************************************************************" << std::endl;
}