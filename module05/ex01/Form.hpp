/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 00:10:41 by jgomes-c          #+#    #+#             */
/*   Updated: 2022/11/05 00:10:41 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "./ex00/Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string _nameForm;
	bool _IsSigned;
	const unsigned int _gradeRequiredSign;
	const unsigned int _gradeExec;

public:
	Form(void);
	Form(std::string nameForm, int _gradeRequiredSign, int gradeExec);
	~Form(void);
	Form(Form const &rhs);
	Form &operator=(Form const &rhs);

	std::string getName(void) const;
	int getGradeRequiredSign(void) const;
	int getGradeExec(void) const;
	bool getSigned(void) const;

	void beSigned(Bureaucrat const &bureaucrat);

	class GradeTooHighException : public std::exception
	{
		virtual const char *what(void) const throw();
	};

	class GradeTooLowException : public std::exception
	{
		virtual const char *what(void) const throw();
	};
};

std::ostream & operator<<( std::ostream & o, Form const & rhs );

#endif