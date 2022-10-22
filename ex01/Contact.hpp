/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 16:53:01 by jgomes-c          #+#    #+#             */
/*   Updated: 2022/10/06 16:53:01 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <string>

class Contact
{
private:
	int index;
	static std::string names[11];
	std::string informations[11];

	enum Field
	{
		FirstName = 0,
		LastName,
		Nickname,
		Phone,
		Secret
	};
public:
	Contact();
	virtual ~Contact();

	bool	set_informations(int index);
	void	display_header(void);
	void	display(void);
};

#endif