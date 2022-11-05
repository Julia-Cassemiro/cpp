/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 20:08:07 by jgomes-c          #+#    #+#             */
/*   Updated: 2022/11/04 20:08:07 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string>

class Dog : public Animal
{

public:
	Dog();
	Dog(Dog const &src);
	virtual ~Dog();

	Dog &operator=(Dog const &rhs);
	virtual void makeSound(void) const;
	virtual Brain *getBrain(void) const;

private:
	Brain *_brain;
};

#endif