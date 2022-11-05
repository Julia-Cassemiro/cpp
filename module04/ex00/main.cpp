/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 18:21:23 by jgomes-c          #+#    #+#             */
/*   Updated: 2022/11/04 18:21:23 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); // will output the cat sound!
	j->makeSound();
	meta->makeSound();
	std::cout << std::endl;
	std::cout << std::endl;
	{
		const WrongAnimal *animal = new WrongAnimal();
		const WrongAnimal *cat = new WrongCat();
		std::cout << cat->getType() << " " << std::endl;
		cat->makeSound();
		animal->makeSound();

		delete animal;
		delete cat;
	}
	std::cout << std::endl;
	std::cout << std::endl;
	{
		const WrongAnimal *wrongAnimal = new WrongAnimal();
		const WrongAnimal *wrongCat = new WrongCat();
		const WrongCat *trueCat = new WrongCat();

		std::cout << "wrongAnimal getType : " << wrongAnimal->getType() << std::endl;
		std::cout << "wrongCat getType : " << wrongCat->getType() << std::endl;
		std::cout << "trueCat getType : " << trueCat->getType() << std::endl;

		wrongAnimal->makeSound();
		wrongCat->makeSound();
		trueCat->makeSound();

		delete wrongAnimal;
		delete wrongCat;
		delete trueCat;
	}
	return 0;
}
