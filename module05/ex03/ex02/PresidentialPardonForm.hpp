/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 12:00:01 by jgomes-c          #+#    #+#             */
/*   Updated: 2022/11/05 12:00:01 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_PARDON_FORM_HPP
#define PRESIDENTIAL_PARDON_FORM_HPP

#include "./ex01/Form.hpp"

class PresidentialPardonForm : public Form
{

private:
	std::string _target;

public:
//constructor, copy, assigment, destructor
	PresidentialPardonForm(void);//constructor
	PresidentialPardonForm(std::string target); //target constructor 
	PresidentialPardonForm(PresidentialPardonForm const &rhs); //copy constructor
	~PresidentialPardonForm(void); //destructor
	PresidentialPardonForm &operator=(PresidentialPardonForm const &rhs); //operator

	void execute(Bureaucrat const &executor) const;
};

#endif