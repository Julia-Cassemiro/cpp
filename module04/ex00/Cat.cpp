/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 18:52:00 by jgomes-c          #+#    #+#             */
/*   Updated: 2022/11/04 18:52:00 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "[Cat] default constructor called" << std::endl;
    this->type = "Cat";
}

Cat::Cat(const Cat& src):Animal(src)
{
    std::cout << "[Cat] copy constructor called" << std::endl;
    *this = src;
}

Cat::~Cat()
{
    std::cout << "[Cat] type:" << this->type << " destroyed" << std::endl;
}

Cat& Cat::operator=(Cat const& rhs)
{
    if (this != &rhs) {
        this->type = rhs.getType();
    }
    return *this;
}


void Cat::makeSound() const
{
    std::cout << "Meow" << std::endl;
}

