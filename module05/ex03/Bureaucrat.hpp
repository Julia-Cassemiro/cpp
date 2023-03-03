/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 23:20:53 by lpaulo-d          #+#    #+#             */
/*   Updated: 2023/03/03 02:20:35 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		BUREAUCRAT_HPP_
#define		BUREAUCRAT_HPP_

#include "AForm.hpp"
#include <iostream>
#include <exception>

class AForm;

class Bureaucrat {
	public:
		Bureaucrat( std::string name, unsigned int grande);
		~Bureaucrat( void );

		std::string		getName( void ) const;
		unsigned int	getGrade( void ) const;
		void			decrementGrade( void );
		void			incrementGrade( void );
		void			signAForm( AForm & Aform );

		void			executeAForm( AForm const& Aform );
		class	GradeTooHighException : public std::exception {
			virtual const char*	what( void ) const throw();
		};
		class	GradeTooLowException : public std::exception {
			virtual const char*	what( void ) const throw();
		};

	private:
		const std::string	_name;
		unsigned int		_grade;
};

std::ostream& operator<<( std::ostream& o, Bureaucrat const& bt_instance );

#endif
