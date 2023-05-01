/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 18:10:07 by jgomes-c          #+#    #+#             */
/*   Updated: 2023/04/30 17:19:05 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"


	/* ------------------- Begin readData ------------------------ */

//this function read the csv and return as std::map<std::string, double>

std::map<std::string, double> readData(){
	
	std::map<std::string, double> _data;
	std::ifstream file("data.csv"); //Read the archive
	std::string line; //lines csv
	
	std::getline(file, line); //ignore the fist line

	while (std::getline(file, line)){ //read all lines and input inside _data
		std::stringstream copyLine(line);
		std::string date, rate;
		std::getline(copyLine, date, ',');
		std::getline(copyLine, rate, ',');
		_data[date] = std::stod(rate); //stod convert for float
	}
	//std::map<std::string, double> = _data
	//				data  | rate
	return _data;
}

	/* ------------------- End readData ------------------------ */


	/* ------------------- Begin checkInput ------------------------ */

void checkFile(char *file, std::map<std::string, double> data){
	//check file exists
	std::ifstream FileCSV(file);
	if(!FileCSV){
		std::cerr << "Error: Failed to open file.csv." << std::endl;
        exit(1);
	}
	//firts line
 	std::string firstLine;
    std::getline(FileCSV, firstLine);
    if (firstLine.compare("date | value")) {
        std::cerr << "Error: First line of file is not 'date | value' ." << std::endl;
        exit(1);
    }
	//verific the rest
	std::string line;
	while(std::getline(FileCSV, line)) {
		std::istringstream copyLine(line);
		std::string date;
        std::string value;
        char seperator;
        if(!(copyLine >> date >> seperator >> value) || seperator != '|'){
			std::cout << "Error: bad input => " << date << ", " << seperator << ", "  << value<< std::endl;	
		}
		else if(!ValidDate(date))
			std::cout << "Error: bad input date => " << date << std::endl;
		else if(!ValidValue(value))
			std::cout << "Error: bad input value => " << value << std::endl;
		else if(stod(value) < 0)
			std::cout << "Error: not a positive number. => "  << value << std::endl;
		else if(stod(value) > 1000)
			std::cout << "Error: too large a number. => "  << value << std::endl;
		else {
			double mult = stod(value) * findRate(date, data);
			std::cout << date << " => " << value << " = " << mult << std::endl;
   		}

	}
	
	FileCSV.close();

}

	/* ------------------- End checkInput ------------------------ */


	/* ------------------- Begin Valid ------------------------ */

bool ValidDate(const std::string& date) {
    if (date.length() != 10) {
        return false;
    }
    // Check that the Year, Month, and Day components are valid integers
    int year; 
	int month;
	int day;
    char separator1;
	char separator2;
    std::istringstream copyDate(date);
    copyDate >> year >> separator1 >> month >> separator2 >> day;
    if (copyDate.fail() || separator1 != '-' || separator2 != '-' ||
        year < 0 || month < 1 || month > 12 || day < 1 || day > 31) {
        return false;
    }
    // Check that the Month and Day components are valid for the given Year
    bool leap_year = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0); //Gregorian calendar
    if ((month == 2 && (leap_year ? day > 29 : day > 28)) ||
        ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)) {
		std::cout << "Error: non-existent Date" << std::endl;
        return false;
    }
    // The input string is a valid date in the Year-Month-Day format
    return true;
}

bool ValidValue(const std::string& value) {
    // Check that the input string has the correct length
    try {
            std::stof(value);
        }
        catch (const std::invalid_argument& e) {
			std::cout << "Error: it's not a float" << std::endl;
            return false;
        }
    return true;
}


	/* ------------------- End Valid ------------------------ */


	
	/* ------------------- Begin findRate ------------------------ */

double findRate(std::string date, std::map<std::string, double> data) {
	
	std::map<std::string, double>::iterator it = data.find(date);
	
    if (it != data.end()) {
        return it->second;
    } else {
        std::string previousDay = moveDateBackOneDay(date);
        return findRate(previousDay, data);
    }
}

	/* ------------------- End findRate ------------------------ */



	/* ------------------- Begin moveDateBackOneDay ------------------------ */
std::string moveDateBackOneDay(const std::string& date) {

    int year, month, day;
    sscanf(date.c_str(), "%d-%d-%d", &year, &month, &day);

    int prev_day = day - 1;
    int prev_month = month;
    int prev_year = year;
    if (prev_day == 0) {
        // If we've gone back to the previous month, set the day to the last day of the previous month
        prev_month = month - 1;
        if (prev_month == 0) {
            prev_month = 12;
            prev_year = year - 1;
            if (prev_year < 2009) {
                return "not valid date";
            }
        }
        switch (prev_month) {
            case 2:
                // Handle leap years for February
                if (prev_year % 4 == 0 && (prev_year % 100 != 0 || prev_year % 400 == 0)) {
                    prev_day = 29;
                } else {
                    prev_day = 28;
                }
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                prev_day = 30;
                break;
            default:
                prev_day = 31;
        }
    }
	
    // Format the previous date as a string and return it
    std::string prev_date = std::to_string(prev_year) + "-";
    if (prev_month < 10)
        prev_date += "0" + std::to_string(prev_month);
    else
        prev_date += std::to_string(prev_month);
    if (prev_day < 10)
        prev_date += "-0" + std::to_string(prev_day);
    else
        prev_date += "-" + std::to_string(prev_day);
    return (prev_date);
}
	/* ------------------- Begin moveDateBackOneDay ------------------------ */
