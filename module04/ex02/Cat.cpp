#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "[Cat] default constructor called" << std::endl;
    this->type = "Cat";

    this->_brain = new Brain();
}

Cat::Cat(const Cat& src):Animal(src)
{
    std::cout << "[Cat] copy constructor called" << std::endl;
    *this = src;
}

Cat::~Cat()
{
    std::cout << "[Cat] " << this->type << " destroyed" << std::endl;
    delete this->_brain;
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

Brain* Cat::getBrain() const
{
    return this->_brain;
}
