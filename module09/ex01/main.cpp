/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 08:10:10 by jgomes-c          #+#    #+#             */
/*   Updated: 2023/04/30 16:45:35 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char *argv[]){
	RPN obj;
	if(argc != 2){
		std::cout << "Error: Is necessary 2 arguments" << std::endl;
		return 0;
	}
	 try
        {
            obj.ReadInput(argv[1]);
        }
        catch(const std::exception& e)
        {
            std::cout << e.what();
        }
}