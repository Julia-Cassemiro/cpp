/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 03:48:14 by jgomes-c          #+#    #+#             */
/*   Updated: 2023/03/03 03:48:14 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

// template <identificador de classe> declaração_de_função;
// modelo <identificador de nome de tipo> declaração_de_função;

// template <class myType>
// myType GetMax (myType a, myType b) {
// return (a>b?a:b);
// }

template <typename Tmpl>
Tmpl max(Tmpl const &x, Tmpl const &y)
{
	return ((x > y) ? x : y);
}

template <typename Tmpl>
Tmpl min(Tmpl const &x, Tmpl const &y)
{
	return ((x < y) ? x : y);
}

template <typename Tmpl>
void swap(Tmpl &x, Tmpl &y)
{
	Tmpl tmp = x;
	x = y;
	y = tmp;
	return;
}

#endif