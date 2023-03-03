/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 14:34:23 by lpaulo-d          #+#    #+#             */
/*   Updated: 2023/03/03 02:51:19 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP_
#define INTERN_HPP_

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {
	public:
		Intern( void );
		Intern( Intern const & rhs );
		~Intern();
		Intern& operator=( Intern const & rhs );

		AForm* makeForm( std::string formName, std::string target );
		class FormUnknown : public std::exception {
			virtual const char* what( void ) const throw();
		};
		class NoTarget : public std::exception {
			virtual const char* what( void ) const throw();
		};

	private:
		AForm* _presidential( std::string target );
		AForm* _robotomy( std::string target );
		AForm* _shrubbery( std::string target );
		AForm* _unknown( std::string target );
};

#endif
