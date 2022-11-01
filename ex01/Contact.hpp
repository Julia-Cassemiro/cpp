/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 21:13:27 by jgomes-c          #+#    #+#             */
/*   Updated: 2022/10/31 21:13:27 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>
#include <iostream>
#include <iomanip>

class Contact {
public:

	Contact( void );
	~Contact( void );

	void		printContact();
	std::string	resizeAtributteToPrint(std::string str);
	void		printHeader();
	bool		isOnlyAlpha(std::string str);
	bool		isOnlyDigit(std::string str);
	void		printContactFull();

	void		setFirstName();
	void		setLastName();
	void		setPhoneNumber();
	void		setDarkestSecret();
	void		setNickname();

	int			index;

private:

	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickname;
	std::string	_darkestSecret;
	std::string	_phoneNumber;

};
#endif