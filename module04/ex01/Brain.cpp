#include "Brain.hpp"
#include <cmath>


Brain::Brain()
{

    std::string doubt[10] = {
        "I am the king of the world",
        "where is my tail?",
        "What if I bite the couch?",
        "why is the air wet?",
        "squirrel?",
        "I want my owner",
        "you obey me",
        "I need to mark territory",
        "my owners will never come back",
        "I'm thirsty and I want to run"
    };

    for (int i = 0; i < 100; i++) {
        this->_ideas[i] = doubt[rand() % 10];
    }

    std::cout << "[Brain] default constructor called" << std::endl;
}

Brain::Brain(const Brain& src)
{
    std::cout << "[Brain] copy constructor called" << std::endl;
    *this = src;
}

Brain::~Brain()
{
    std::cout << "[Brain] destroyed" << std::endl;
}


Brain & Brain::operator=( Brain const & rhs ) {
	(void) rhs;
	std::cout << "copy operator Brain called" << std::endl;
	return ( *this );
}

void Brain::getIdea(int index) const
{
    if (index < 0 || index > 99) {
        std::cout << "Index out of bounds, brain overload!" << std::endl;
        return;
    } else {
        std::cout << "[Brain] Idea: " << this->_ideas[index] << std::endl;
    }
}
