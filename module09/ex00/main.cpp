/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 18:10:12 by jgomes-c          #+#    #+#             */
/*   Updated: 2023/05/01 06:16:57 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"


int main (int argc, char **argv){
	if(argc != 2){
		std::cout << "Error: could not open file. Please pass a file as an argument!\n" << std::endl;
		return 0;
	}
	
	std::map<std::string, double> _data = readData(); //_data is the csv file in double
	checkFile(argv[1], _data);
	return 0;
}