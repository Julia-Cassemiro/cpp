/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 08:15:25 by jgomes-c          #+#    #+#             */
/*   Updated: 2023/05/01 04:55:48 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN ()
{
}

RPN::RPN (const RPN &a)
{
	this->operator=(a);
}

RPN::~RPN ()
{
}

RPN & RPN::operator = (const RPN &a)
{
		(void)a;
	return (*this);
}


int RPN::CalculationResult(int n1, int n2, char o)
{
	switch (o)
	{
		case '+':
			return (n1 + n2);
		case '-':
			return (n2 - n1);
		case '*':
			return (n1 * n2);
		case '/':
		{
			if (n2 == 0)
				throw std::invalid_argument("Error: Floating Point Exception Dividing on Zero\n");
			return (n2 / n1);
		}
	}
	return (0);
}


void    RPN::ReadInput(std::string input)
{
	std::string ope = "+/*-";
	
	size_t 	op;
	size_t  num;
	op = num = 0;

	for (size_t i = 0; i < input.length(); i++)
	{
		if (isdigit(input[i]))
		{
			if(i != 0){
				if(!(isspace(input[i - 1])) && isdigit(input[i - 1])){
					throw std::invalid_argument("Error: Input > 9 or < 0\n");
				}
			}
			num++; //one more number
			this->_numbers.push(input[i] - '0'); //convert numeric || '5' - '0' = 53 - 48 == 5.
		}
		else if (ope.find(input[i]) != std::string::npos) //find a operator
		{
			if(!(isspace(input[i - 1]))){
				throw std::invalid_argument("Error: Invalid Input\n");
			}
			op++; //increment operator
			
			if (_numbers.empty()) {
        		throw std::invalid_argument("Error: Invalid Input\n");
    		}
			
			int theLast = _numbers.top(); 
			_numbers.pop(); 
			
			if (_numbers.empty()) {
        		throw std::invalid_argument("Error: Invalid Input\n");
    		}
			
			_numbers.top() = CalculationResult(theLast, _numbers.top(), input[i]);
		}
		else if (isspace(input[i]))
			continue;
		else
			throw std::invalid_argument("Error: Invalid Input\n");		
	}
	if ((op + 1) != num)
		throw std::invalid_argument("Error: Number of operators less or greater than numbers\n");
	std::cout << _numbers.top() << "\n";
}