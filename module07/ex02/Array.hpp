/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 01:15:34 by jgomes-c          #+#    #+#             */
/*   Updated: 2023/04/11 03:34:33 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef	ARRAY_HPP_
#define	ARRAY_HPP_

#include <iostream>

template<typename T>
class Array {
	public:
		Array( void );
		Array( unsigned int n );
		Array( Array<T> const& instance );
		~Array( void );

		unsigned int	size( void ) const;
		Array const&	operator=( Array const& instance );
		T&				operator[]( int );

		class IndexOutOfBoundsException : public std::exception {
			public:
				virtual const char* what() const throw();
		};

	private:
		T*				_array;
		unsigned int	_size;
};

#include "Array.tpp"

#endif
