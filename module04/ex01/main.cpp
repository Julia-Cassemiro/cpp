/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 20:08:23 by jgomes-c          #+#    #+#             */
/*   Updated: 2022/11/04 20:08:23 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
    {
        const Animal* j = new Dog();
        const Animal* i = new Cat();

        delete j;
        delete i;
    }
    {
        const int size = 30;
        const Animal* animals[size];

        for (int i = 0; i < size; i++) {
            if (i % 2 == 0)
                animals[i] = new Dog();
            else
                animals[i] = new Cat();
        }

        for (int i = 0; i < size; i++) {
            animals[i]->makeSound();
        }

        for (int i = 0; i < size; i++) {
            delete animals[i];
        }
    }
    {
        Cat* cat = new Cat();
        std::cout << "Cat's type: " << cat->getType() << std::endl;
        cat->makeSound();

        for (int i = 0; i < 101; i++) {
            cat->getBrain()->getIdea(i);
        }
        delete cat;
    }
    return 0;
}
