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

#include "Form.hpp"

int main(void)
{
	std::cout << std::endl;
	try {
		std::cout << "SUCCESS!!!" << std::endl;
		Form FormGood = Form("Art", 1, 100);
		std::cout << FormGood;
	} catch ( std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		std::cout << "FAIL" << std::endl;
		Form formBad = Form("Art", 1 ,151);
		std::cout << formBad;
	} catch ( std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		std::cout << "FAIL" << std::endl;
		Form formBad = Form("Art", 0, 1);
		std::cout << formBad;
	} catch ( std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		std::cout << "SUCCESS!!!" << std::endl;
		Form formGood = Form("Art", 1, 100);
		const Bureaucrat grade = Bureaucrat( "Grey", 1);
		formGood.beSigned(grade);
		std::cout << formGood;
	} catch ( std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		std::cout << "FAIL" << std::endl;
		Form formGood = Form("Art", 10, 150);
		const Bureaucrat grade = Bureaucrat( "Grey", 11);
		formGood.beSigned(grade);
		std::cout << formGood;
	} catch ( std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		std::cout << "FAIL" << std::endl;
		Form formBad = Form("Art", -30, 15);
		std::cout << formBad;
	} catch ( std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		std::cout << "BURECRAUT DONT HAVE GRADE REQUIRED TO SIGN" << std::endl;
		Form formBad = Form("Art", 2, 15);
		Bureaucrat grade = Bureaucrat("Grey", 5);
		grade.signForm(formBad);
		std::cout << formBad;
		std::cout << grade;
	} catch ( std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		std::cout << "SUCCESS!! BURECRAUT HAVE GRADE REQUIRED TO SIGN" << std::endl;
		Form  formGood = Form("Art", 1, 15);
		Bureaucrat grade = Bureaucrat("Grey", 1);
		grade.signForm(formGood);
		std::cout << formGood;
		std::cout << grade;
	} catch ( std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;	
	try {
		std::cout << "dont nedd to be signed" << std::endl;
		Form  formGood = Form("Art", 1, 15);
		Bureaucrat grade = Bureaucrat("Grey", 1);
		// formGood.beSigned(grade);
		grade.signForm(formGood);
		std::cout << formGood;
		std::cout << grade;
	} catch ( std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;	

	return (0);
}