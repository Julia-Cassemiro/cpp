/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 13:36:23 by jgomes-c          #+#    #+#             */
/*   Updated: 2022/11/05 13:36:23 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) // constructor
	: Form("PresidentialForm", 72, 45), _target("Julia")
{
	return;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) // constructor target
	: Form("PresidentialForm", 72, 45), _target(target)
{
	return;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &rhs) // copy
	: Form("PresidentialForm", 72, 45)
{
	*this = rhs;
	return;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{ // detructor
	return;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{ // operator
	(void)rhs;
	return (*this);
}

// new function EXECUTE

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	{
		if (this->maybeExecute(executor) == false)
			return;
		std::cout << "** some drilling noises **" << std::endl;
		std::cout << "pipi tipitipi drundrun" << std::endl;
		srand(time(NULL));
		if (rand() % 2)
			std::cout << "STATUS ROBOTOMY:\n" << this->_target << " IS NOW A ROBO!" << std::endl;
		else
			std::cout << "STATUS ROBOTOMY:\n" << this->_target << " COULDN'T BE A ROBO" << std::endl;
		return;
	}
}
