/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 03:18:10 by jgomes-c          #+#    #+#             */
/*   Updated: 2023/01/22 03:18:10 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef		BUREAUCRAT_HPP_
#define		BUREAUCRAT_HPP_

#include <iostream>
#include <exception>

class Bureaucrat {
	public:
		Bureaucrat( std::string name, unsigned int grande);
		~Bureaucrat( void );

		std::string		getName( void ) const;
		unsigned int	getGrade( void ) const;
		void			decrementGrade( void );
		void			incrementGrade( void );

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
