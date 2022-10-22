/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 17:44:34 by jgomes-c          #+#    #+#             */
/*   Updated: 2022/10/21 17:44:34 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Contact.hpp"

std::string Contact::names[11] = {
	"First Name",
	"Last Name",
	"Nickname",
	"Phone Number",
	"Darkest Secret"
};

Contact::Contact(){
	for (int i = FirstName; i <= Secret; i++)
		this->informations[i] = std::string();
}

Contact::~Contact()
{
}

bool Contact::set_informations(int index){
	this->index = index;
	for (int i = FirstName; i <= Secret; i++)
	{
		std::cout << "# " << Contact::names[i] << ":\n+";
		std::getline(std::cin, this->informations[i]);
	}
	size_t totalLength = 0;
	for (int i = FirstName; i <= Secret; i++)
		totalLength += this->informations[i].length();
	if (totalLength == 0){
		std::cout << "# Empty contact not added !" << std::endl;
		return (false);
	}
	std::cout << "# Contact Added!" << std::endl;
	return (true);
}

void Contact::display_header()
{
	std::cout << "|" << std::setw(10) << this->index;
	for (int i = FirstName; i <= Secret; i++)
	{
		std::cout << "|";
		if (this->informations[i].length() > 10)
			std::cout << this->informations[i].substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << this->informations[i];
	}
	std::cout << "|" << std::endl;
}