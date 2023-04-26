/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 14:58:55 by lpaulo-d          #+#    #+#             */
/*   Updated: 2023/04/26 03:34:04 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span( void ) : _N(0) {
	return ;
}

Span::Span( unsigned int N ) : _N(N) {
	return ;
}

Span::Span( Span const& instance ) {
	this->operator=(instance);
	return ;
}

Span::~Span( void ){
	return ;
}

Span& Span::operator=( Span const& instance ) {
	this->_N = instance._N;
	this->_numbers = instance._numbers;
	return *this;
}
/*  ------------------ function called addNumber() to add a single number to the Span --------------------------  

Os dois métodos addNumber() são necessários porque a classe Span deve ser capaz 
de adicionar um único número 
ou um intervalo de números em seu vetor interno _numbers. */
void	Span::addNumber( int n ) {
	if ( this->_numbers.size() == this->_N )
		throw Span::FullException();
	this->_numbers.push_back(n); //remove the last element
}

void	Span::addNumber( std::vector<int>::iterator begin, std::vector<int>::iterator end) {
	int	length = 0;

	for ( std::vector<int>::iterator it = begin; it != end; it++ )
		length++;
	if ( this->_numbers.size() + (length - 1) > this->_N )
		throw Span::FullException();
	this->_numbers.insert( this->_numbers.end(), begin, end );
}

/* ------------------ end addNumber()  -------------------------- */

int		Span::shortestSpan( void ) {
	if (this->_numbers.size() < 2)
		throw Span::EmptyException();

	std::vector<int> allNumbers = _numbers;
    std::sort(allNumbers.begin(), allNumbers.end()); // sort order crescent

    int shortestSpan = std::abs(allNumbers[0] - allNumbers[1]); // 3 - 6 = 3
    for (size_t i = 2; i < allNumbers.size(); i++) {
        int span = std::abs(allNumbers[i] - allNumbers[i - 1]); // 9 - 6 = 3 || 11 - 9 = 2 || 17 - 9 = 8
        if (span < shortestSpan)
            shortestSpan = span;
    }

    return shortestSpan;
	
}

int		Span::longestSpan( void ) {
	if (this->_numbers.size() < 2)
		throw Span::EmptyException();

	int min = *std::min_element(_numbers.begin(), _numbers.end());
    int max = *std::max_element(_numbers.begin(), _numbers.end());

    return std::abs(max - min);

}

const char* Span::FullException::what() const throw() {
	return "Span is Full";
}

const char* Span::EmptyException::what() const throw() {
	return "Empty or have only one number";
}
