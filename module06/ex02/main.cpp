/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 03:26:05 by jgomes-c          #+#    #+#             */
/*   Updated: 2023/01/21 03:26:05 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base *generate(void);
void identify(Base *p);
void identify(Base &p);

int main(void)
{
	srand(time(NULL));
	{
		Base *base = generate();
		std::cout << "Base &p:  ";
		identify(*base);
		delete base;
	}
	{
		Base *base = generate();
		std::cout << "Base *p:  ";
		identify(base);
		delete base;
	}
	{
		Base *base = new Base();
		std::cout << "Base *p:  ";
		identify(base);
		delete base;
	}
	return 0;
}

//The generate function uses the rand function to generate a random number between 0 and 2,
// and then returns an instance of A, B, or C depending on the random number generated:
Base *generate(void)
{
	int num = std::rand() % 3;

	if (num == 0)
		return new A();
	else if (num == 1)
		return new B();
	else
		return new C();
}

//The identify function uses dynamic_cast to check the actual type of the object pointed to by the Base pointer
// and prints the appropriate string
void identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "Not found" << std::endl;
}

void identify(Base &p)
{
	try
	{
		A &a = dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
		(void)a;
	}
	catch (...)
	{
	}
	try
	{
		B &b = dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
		(void)b;
	}
	catch (...)
	{
	}
	try
	{
		C &c = dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
		(void)c;
	}
	catch (...) //catch-all
	{
	}
}