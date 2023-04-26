/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 09:47:49 by jgomes-c          #+#    #+#             */
/*   Updated: 2023/04/26 04:43:42 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	MUTANTSTACK_HPP_
#define	MUTANTSTACK_HPP_

#include <iostream>
#include <deque>
#include <stack>
#include <list>

template<typename T, typename container = std::deque<T> >
class MutantStack : 
	//stack container, the last insert is the fisrt out
	public std::stack< T, //tipo de dados que a pilha vai armazenar
				container>  //qual container vai usar, deque por padrao
	{ 
	public:

		MutantStack(void) {
			return ;
		};
		MutantStack(MutantStack const& instance) : std::stack<T, container>(instance) {
			return ;
		};
		~MutantStack(void) {
			return ;
		};
		MutantStack& operator=(MutantStack const& instance) {
			this->c = instance.c;
			return *this;
		};

		typedef typename container::iterator iterator;
		iterator begin(void){
			return this->c.begin();
		};
		iterator end(void){
			return this->c.end();
		};

};

#endif