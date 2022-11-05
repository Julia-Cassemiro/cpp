/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 20:08:09 by jgomes-c          #+#    #+#             */
/*   Updated: 2022/11/04 20:08:09 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


Dog::Dog()
{
    std::cout << "[Dog] default constructor called" << std::endl;
    this->type = "Dog";

    this->_brain = new Brain();
}

Dog::Dog(const Dog& src):Animal(src)
{
    std::cout << "[Dog] copy constructor called" << std::endl;
    *this = src;
}


Dog::~Dog()
{
    std::cout << "[Dog] " << this->type << " destroyed" << std::endl;
    delete this->_brain;
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

Brain* Dog::getBrain() const
{
    return this->_brain;
}
