/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 18:52:34 by jgomes-c          #+#    #+#             */
/*   Updated: 2022/11/04 18:52:34 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


Dog::Dog()
{
    std::cout << "[Dog] default constructor called" << std::endl;
    this->type = "Dog";
}

Dog::Dog(const Dog& src):Animal(src)
{
    std::cout << "[Dog] copy constructor called" << std::endl;
    *this = src;
}

Dog::~Dog()
{
    std::cout << "[Dog] type:" << this->type << " destroyed" << std::endl;
}


Dog& Dog::operator=(Dog const& rhs)
{

    if (this != &rhs) {
        this->type = rhs.getType();
    }
    return *this;
}


void Dog::makeSound() const
{
    std::cout << "Woof" << std::endl;
}
