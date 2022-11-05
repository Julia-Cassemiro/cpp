/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 23:21:35 by jgomes-c          #+#    #+#             */
/*   Updated: 2022/11/04 23:21:35 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	std::cout << std::endl;
	try
	{
		Bureaucrat gradeGood = Bureaucrat("Art", 1);
		std::cout << gradeGood;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Bureaucrat gradeBad = Bureaucrat("Art", 151);
		std::cout << gradeBad;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Bureaucrat gradeBad = Bureaucrat("Art", 0);
		std::cout << gradeBad;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Bureaucrat gradeGood = Bureaucrat("Art", 1);
		std::cout << gradeGood;
		gradeGood.incrementGrade();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Bureaucrat gradeGood = Bureaucrat("Art", 150);
		std::cout << gradeGood;
		gradeGood.decrementGrade();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Bureaucrat gradeBad = Bureaucrat("Art", -30);
		std::cout << gradeBad;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	return (0);
}