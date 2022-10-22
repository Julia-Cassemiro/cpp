/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Schedule.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 16:37:14 by jgomes-c          #+#    #+#             */
/*   Updated: 2022/10/21 16:37:14 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook(){
	this->amount = 0;
}

Phonebook::~Phonebook(){

}

void Phonebook::show(void){
	std::cout << "# PHONEBOOK" <<std::endl;
	std::cout << "# Enter with a command [HELP, ADD, SEARCH, EXIT]:" <<std::endl;
}

void Phonebook::add(void){
	if (this->amount == 8)
		std::cout << "# The Phonebook  is full!" <<std::endl;
	else if (this->contacts[this->amount].set_informations(this->amount + 1))
		this->amount++;
}

void Phonebook::header(void)
{
	std::cout << "|---------------------------------------------------------------------------|" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|  Phone Number|  Darkest Secret|" << std::endl;
	std::cout << "|---------------------------------------------------------------------------|" << std::endl;
	for (int i = 0; i < this->amount; i++)
		this->contacts[i].display_header();
}

void Phonebook::search(void)
{
	int index;

	if (this->amount == 0)
		std::cout << "# Add a contact before searching !" << std::endl;
	else
	{
		this->header();
	}

}