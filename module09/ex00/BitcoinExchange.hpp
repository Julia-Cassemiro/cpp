/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 18:10:10 by jgomes-c          #+#    #+#             */
/*   Updated: 2023/04/29 23:01:18 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <exception>
#include <map>


std::map<std::string, double> readData();
void checkFile(char *file, std::map<std::string, double> data);
bool ValidDate(const std::string& date);
bool ValidValue(const std::string& value);
double findRate(std::string date, std::map<std::string, double> data);
std::string moveDateBackOneDay(const std::string& date);


#endif