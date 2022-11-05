/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 12:01:00 by jgomes-c          #+#    #+#             */
/*   Updated: 2022/11/05 12:01:00 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_FORM_HPP
# define SHRUBBERY_CREATION_FORM_HPP

#include "./ex01/Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form {

private:

	std::string	_target;

public:

	ShrubberyCreationForm( void );
	ShrubberyCreationForm( std::string target );
	ShrubberyCreationForm( ShrubberyCreationForm const & rhs );
	~ShrubberyCreationForm( void );
	ShrubberyCreationForm & operator=( ShrubberyCreationForm const & rhs );

	void	execute( Bureaucrat const & executor ) const;
};

#endif