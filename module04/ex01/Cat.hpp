/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 20:07:49 by jgomes-c          #+#    #+#             */
/*   Updated: 2022/11/04 20:07:49 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string>

class Cat : public Animal {

public:
    Cat();
    Cat(Cat const& src);
    virtual ~Cat();

    Cat& operator=(Cat const& rhs);
    virtual void makeSound(void) const;
    Brain* getBrain(void) const;

private:
    Brain* _brain;
};

#endif 