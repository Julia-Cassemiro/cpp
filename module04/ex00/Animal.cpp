/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 18:25:32 by jgomes-c          #+#    #+#             */
/*   Updated: 2022/11/04 18:25:32 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "[Animal] default constructor called" << std::endl;
    this->type = "Animal";
}

Animal::Animal(const Animal& src)
{
    std::cout << "[Animal] copy constructor called" << std::endl;
    *this = src;
}

Animal::~Animal()
{
    std::cout << "[Animal] type:" << this->type << " destroyed" << std::endl;
}


Animal& Animal::operator=(Animal const& rhs)
{
    std::cout << "[Animal] assignation operator called" << std::endl;
    if (this != &rhs) {
        this->type = rhs.getType();
    }
    return *this;
}


const std::string Animal::getType() const
{
    return this->type;
}


void Animal::setType(std::string type)
{
    this->type = type;
}

void Animal::makeSound() const
{
    std::cout << "**Sleepp.. eaaat...**" << std::endl;
}