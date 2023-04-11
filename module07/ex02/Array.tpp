/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 01:15:37 by jgomes-c          #+#    #+#             */
/*   Updated: 2023/04/11 03:55:06 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Array.hpp"

//default constructor that initializes array size to zero and does not allocate memory
template<typename T>
Array<T>::Array( void ) {
	std::cout << "default constructor called" << std::endl;
	this->_array = new T[0];
	this->_size = 0;
}

//constructor that takes an integer as a parameter and allocates memory for the array with the specified size
template<typename T>
Array<T>::Array( unsigned int n ) {
	std::cout << "unsigned int constructor called" << std::endl;
	this->_array = new T[n];
	this->_size = n;

}

template<typename T>
Array<T>::Array( Array<T> const& instance ) {
	std::cout << "copy constructor called" << std::endl;
	this->_array = new T[0];
	*this = instance;
}

template<typename T>
Array<T>::~Array( void ) {
	std::cout << "destructor called" << std::endl;
	delete[] this->_array;
}

template<typename T>
unsigned int	Array<T>::size( void ) const {
	return this->_size;
}

template<typename T>
T& Array<T>::operator[]( int index ) { // recebe como parâmetro um índice inteiro que representa a posição do elemento que se deseja acessar
	if ( index < 0 || this->_size == 0 || static_cast<unsigned int>(index) >= this->_size )
		throw Array<T>::IndexOutOfBoundsException();
	return this->_array[index];
}

template<typename T>
Array<T> const& Array<T>::operator=( Array<T> const& instance ) {
	std::cout << "assignment operator called" << std::endl;
	delete[] this->_array;
	this->_array = new T[instance.size()];
	this->_size = instance.size();
	for ( unsigned i = 0; i < this->_size; i++)
		this->_array[i] = instance._array[i];
	return *this;
}

template<typename T>
const char* Array<T>::IndexOutOfBoundsException::what( void ) const throw() {
	return ( "index is out of bounds." );
}
