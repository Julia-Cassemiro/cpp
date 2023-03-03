/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 00:04:41 by lpaulo-d          #+#    #+#             */
/*   Updated: 2023/03/03 02:18:46 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		AAFORM_HPP_
#define		AAFORM_HPP_

#include "Bureaucrat.hpp"
#include <iostream>
#include <ostream>
#include <exception>

class Bureaucrat;

class AForm {
	public:
		AForm ( void );
		AForm( std::string name, int gradeRequired, int gradeExec );
		AForm( AForm const& Aform_instace );
		virtual ~AForm( void );
		AForm& operator=( AForm const& Aform_instace );

		std::string	getName( void ) const;
		int			getGradeRequired( void ) const;
		int			getGradeExec( void ) const;
		bool		getSigned( void ) const;
		void		beSigned( Bureaucrat const& bureaucrat );

		class GradeTooHighException : public std::exception {
			virtual const char* what( void ) const throw();
		};
		class GradeTooLowException : public std::exception {
			virtual const char* what( void ) const throw();
		};


		//!!!!!!
		bool			mayExecute( Bureaucrat const& executor ) const;
		virtual void	execute( Bureaucrat const& executor ) const = 0;
		class AFormNotSignedException : public std::exception {
			virtual const char* what( void ) const throw();
		};


	private:
		const std::string	_name;
		bool				_signed;
		const unsigned int	_gradeRequired;
		const unsigned int	_gradeExec;
};

std::ostream& operator<<(std::ostream& o, AForm const& Aform_instance);

#endif
