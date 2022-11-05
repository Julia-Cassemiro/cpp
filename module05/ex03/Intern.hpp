/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 14:35:36 by jgomes-c          #+#    #+#             */
/*   Updated: 2022/11/05 14:35:36 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "./ex02/PresidentialPardonForm.hpp"
#include "./ex02/RobotomyRequestForm.hpp"
#include "./ex02/ShrubberyCreationForm.hpp"

class Intern {

private:

	Form * _presidential( std::string target );
	Form * _robotomy( std::string target );
	Form * _shrubbery( std::string target );
	Form * _unknown( std::string target );

public:

	Intern( void );
	Intern( Intern const & rhs );
	~Intern();
	Intern & operator=( Intern const & rhs );

	Form * makeForm( std::string formName, std::string target );

	class FormDontExist : public std::exception {
		virtual const char* what( void ) const throw();
	};

	class TargetDontExist : public std::exception {
		virtual const char* what( void ) const throw();
	};
};

#endif