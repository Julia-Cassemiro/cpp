/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 03:13:37 by jgomes-c          #+#    #+#             */
/*   Updated: 2023/01/21 03:13:37 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

Data *deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}

uintptr_t serialize(Data *ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}


int main(void)
{
	uintptr_t	raw;
	Data		data;
	Data*		data_ptr;

	data.value = 42;
	std::cout << "Data address: " << &data << std::endl;

	raw = serialize(&data);
	std::cout << "Serialize address: " << raw << std::endl;

	data_ptr = deserialize(raw);
	std::cout << "Deserialize address: " << data_ptr << std::endl;
	return 0;
}