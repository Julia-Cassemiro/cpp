/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 15:19:32 by jgomes-c          #+#    #+#             */
/*   Updated: 2022/11/05 15:19:32 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

#include "Contact.hpp"
#include <stdlib.h>
#include <string>
#include <iostream>
#include <iomanip>

class PhoneBook {
public:

	PhoneBook( void );
	~PhoneBook( void );

	void			printAllContacts();
	void			searchContacts();
	void			setNewContact();
	void			setCurrentId(int id);

	int				total;

private:

	Contact			_contacts[8];
	int				_currentId;
};

#endif