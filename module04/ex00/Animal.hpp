/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 18:14:43 by jgomes-c          #+#    #+#             */
/*   Updated: 2022/11/04 18:14:43 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
public:
	Animal();
	Animal(Animal const &src);
	virtual ~Animal();

	Animal &operator=(Animal const &rhs);
	const std::string getType(void) const;
	void setType(const std::string type);
	virtual void makeSound(void) const;

protected:
	std::string type;
};

#endif