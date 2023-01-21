/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 03:24:24 by jgomes-c          #+#    #+#             */
/*   Updated: 2023/01/21 03:24:24 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 03:23:40 by jgomes-c          #+#    #+#             */
/*   Updated: 2023/01/21 03:23:40 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef	BASE_HPP_
#define	BASE_HPP_

#include <iostream>
#include <cstdlib>
#include <ctime>


class Base {
	public:
		virtual ~Base( void ) {
		};
};

class A : public Base {
};
class B : public Base {
};
class C : public Base {
};

Base*	generate( void ); //It randomly instanciates A, B or C and returns the instance as a Base pointer
void	identify( Base *p ); //It prints the actual type of the object pointed to by p: "A", "B" or "C".
void	identify( Base &p ); //It prints the actual type of the object pointed to by p: "A", "B" or "C". 

#endif