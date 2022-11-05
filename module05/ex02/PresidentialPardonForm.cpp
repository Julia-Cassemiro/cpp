/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 12:08:49 by jgomes-c          #+#    #+#             */
/*   Updated: 2022/11/05 12:08:49 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) // constructor
	: Form("PresidentialForm", 25, 5), _target("Julia")
{
	return;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) // constructor target
	: Form("PresidentialForm", 25, 5), _target(target)
{
	return;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &rhs) // copy
	: Form("PresidentialForm", 25, 5)
{
	*this = rhs;
	return;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{ // detructor
	return;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{ // operator
	(void)rhs;
	return (*this);
}

// new function EXECUTE

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	{
		if (this->maybeExecute(executor) == false)
			return;
		std::cout << this->_target << " has been pardoned by Princess Phalange!" << std::endl;
		return;
	}
}
