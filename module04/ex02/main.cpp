/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 20:46:51 by jgomes-c          #+#    #+#             */
/*   Updated: 2022/11/04 20:46:51 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"


int main(void)
{
    {
        const Dog* j = new Dog();
        const Cat* i = new Cat();
        // const Animal* k = new Animal(); 

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
            animals[i]->getBrain()->getIdea(i);
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
