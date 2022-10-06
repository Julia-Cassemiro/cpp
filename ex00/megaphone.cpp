/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 09:47:49 by jgomes-c          #+#    #+#             */
/*   Updated: 2022/09/01 17:29:44 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Write class names in UpperCamelCase format

#include <string>
#include <iostream>
// #include <locate>

int main(int argc, char const *argv[]){


	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl; //printa
	else
	{
		for (int count = 1; count < argc; count++)
		{
			std::string str(argv[count]); 	//	sequência de caracteres como um objeto de classe . 
											//	Esta classe é chamada std::string. A classe String armazena os caracteres como uma sequência de bytes
											// 	com a funcionalidade de permitir o acesso a um caractere de byte único .
			for (size_t i = 0; i < str.length(); i++)
				std::cout << (char)std::toupper(str[i]); //passa cada letra para maiusculo, e printa
		}
		std::cout << std::endl; //quebra de linha
	}
	return (0);
}