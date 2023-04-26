/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 12:09:44 by lpaulo-d          #+#    #+#             */
/*   Updated: 2023/04/26 02:14:11 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	EASYFIND_HPP_
#define	EASYFIND_HPP_

#include <iostream>
#include <algorithm>

class NotFoundException : public std::exception { //uma classe NotFoundException que herda da classe std::exception. A classe NotFoundException sobrescreve a função what() da classe base std::exception 
												//	para fornecer uma mensagem de erro personalizada que será exibida quando a exceção for lançada.
	virtual const char* what() const throw() {
		return "Exception: Not found.";
	};
};

template<typename T>
typename T::iterator easyfind( T& container, int i ) {
	typename T::iterator	it; //iterator, com ele é possivel caminhar pelo container

	it = std::find( container.begin(), container.end(), i ); //std::find" é utilizada para procurar o valor "i" dentro do container "container", usando os iterators "begin()" e "end()" para delimitar a busca
	if (it == container.end())
		throw ::NotFoundException();
	return it;
}

#endif
