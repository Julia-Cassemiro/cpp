/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Schedule.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 19:50:58 by coder             #+#    #+#             */
/*   Updated: 2022/10/06 19:53:07 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <string>
# include "Contact.hpp"

class Phonebook
{
	private:
		Contact contacts[8];
		int		amount;

	public:
		Phonebook();
		virtual ~Phonebook();

		void	show(void);
		void	add(void);
		void	search(void);
		void	header(void);
};

#endif