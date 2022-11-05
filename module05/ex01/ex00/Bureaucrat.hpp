/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 23:21:38 by jgomes-c          #+#    #+#             */
/*   Updated: 2022/11/04 23:21:38 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <exception>
#include <string>
#include <iostream>
#include "../Form.hpp"

class Form;

class Bureaucrat
{

private:
	const std::string _name;
	unsigned int _grade;

public:
	Bureaucrat( void );
	Bureaucrat( std::string name, unsigned int grade );
	Bureaucrat( Bureaucrat const & rhs );
	~Bureaucrat( void );
	Bureaucrat & operator=( Bureaucrat const & rhs );

	std::string		getName( void ) const;
	unsigned int	getGrade( void ) const;
	void			decrementGrade( void );
	void			incrementGrade( void );

	void			signForm( Form & form );

	class GradeTooHighException  : public std::exception {
		virtual const char* what( void ) const throw();
	};

	class GradeTooLowException : public std::exception {
		virtual const char* what( void ) const throw();
	};
};

std::ostream &operator<<(std::ostream &print, Bureaucrat const &rhs);

#endif