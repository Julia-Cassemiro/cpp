/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 03:12:34 by jgomes-c          #+#    #+#             */
/*   Updated: 2023/01/21 03:12:34 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		SERIALIZE_HPP_
# define	SERIALIZE_HPP_

#include <iostream>
#include <stdint.h>

typedef struct s_data {
	int	value;
} Data;



uintptr_t	serialize( Data* ptr ); //It takes a pointer and converts it to the unsigned integer type uintptr_t.
Data*		deserialize( uintptr_t raw ); //It takes an unsigned integer parameter and converts it to a pointer to Data.

#endif