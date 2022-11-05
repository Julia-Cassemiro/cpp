/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 20:03:28 by jgomes-c          #+#    #+#             */
/*   Updated: 2022/11/04 20:03:28 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include "Brain.hpp"
#include <iostream>
#include <string>

class Animal {

public:
    Animal();
    Animal(Animal const& src);
    virtual ~Animal();

    Animal& operator=(Animal const& rhs);
    const std::string getType(void) const;
    void setType(std::string type);
    virtual void makeSound(void) const = 0;
    virtual Brain* getBrain(void) const = 0; //especificar pure

protected:
    std::string type;
};

#endif