/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 00:13:58 by jgomes-c          #+#    #+#             */
/*   Updated: 2022/11/05 00:13:58 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void)
	: _nameForm("Caio"), _IsSigned(false), _gradeRequiredSign(150), _gradeExec(150)
{
	std::cout << "Default constructor Form called" << std::endl;
	return;
}

Form::Form(std::string name, int gradeRequired, int gradeExec)
	: _nameForm(name), _IsSigned(false), _gradeRequiredSign(gradeRequired), _gradeExec(gradeExec)
{
	std::cout << "Name constructor Form called" << std::endl;
	if (this->_gradeExec < 1 || this->_gradeRequiredSign < 1)
		throw Form::GradeTooHighException();
	else if (this->_gradeExec > 150 || this->_gradeRequiredSign > 150)
		throw Form::GradeTooLowException();
	return;
}

Form::~Form(void)
{
	std::cout << "Default destructor Form called" << std::endl;
	return;
}

Form::Form(Form const &rhs)
	: _nameForm(rhs.getName()), _IsSigned(rhs.getSigned()),
	  _gradeRequiredSign(rhs.getGradeRequiredSign()), _gradeExec(rhs.getGradeExec())
{
	std::cout << "copy constructor Bureaucrat called" << std::endl;
	*this = rhs;
	return;
}

Form &Form::operator=(Form const &rhs)
{
	std::cout << "copy operator Form called" << std::endl;
	this->_IsSigned = rhs.getSigned();
	return (*this);
}

const char *Form::GradeTooHighException::what(void) const throw()
{
	return ("Grade is to high!!");
}

const char *Form::GradeTooLowException::what(void) const throw()
{
	return ("Grade is to low!!");
}

std::string Form::getName(void) const
{
	return (this->_nameForm);
}

int Form::getGradeRequiredSign(void) const
{
	return (this->_gradeRequiredSign);
}

int Form::getGradeExec(void) const
{
	return (this->_gradeExec);
}

bool Form::getSigned(void) const
{
	return (this->_IsSigned);
}

void Form::beSigned(Bureaucrat const &bureaucrat)
{
	if (bureaucrat.getGrade() <= this->_gradeRequiredSign)
		this->_IsSigned = true;
	else
		throw Form::GradeTooLowException();
}

std::ostream &operator<<(std::ostream &o, Form const &rhs)
{
	o << "Name: " << rhs.getName() << std::endl;
	o << "Signed: " << rhs.getSigned() << std::endl;
	o << "Grade Exec: " << rhs.getGradeExec() << std::endl;
	o << "Grade required: " << rhs.getGradeRequiredSign() << std::endl;
	return (o);
}