/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 20:49:37 by lpaulo-d          #+#    #+#             */
/*   Updated: 2023/04/11 03:07:53 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ITER_HPP_
#define	ITER_HPP_

#include <iostream>
#include <string.h>

template<typename T>
void	iter(T *arr, size_t size, void (*f)(T const &))
{
	for (size_t i = 0; i < size; i++)
	{
		f(arr[i]);
	}
}

template<typename T>
void	print_something(T const &x)
{
	std::cout << x << std::endl;
}


#endif
