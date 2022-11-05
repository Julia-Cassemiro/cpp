/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 12:00:49 by jgomes-c          #+#    #+#             */
/*   Updated: 2022/11/05 12:00:49 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_FORM_HPP
# define ROBOTOMY_REQUEST_FORM_HPP

#include "./ex01/Form.hpp"
#include <ctime>
#include <cstdlib>

class RobotomyRequestForm : public Form {

private:

	std::string	_target;

public:

	RobotomyRequestForm( void );
	RobotomyRequestForm( std::string target );
	RobotomyRequestForm( RobotomyRequestForm const & rhs );
	~RobotomyRequestForm( void );
	RobotomyRequestForm & operator=( RobotomyRequestForm const & rhs );

	void	execute( Bureaucrat const & executor ) const;
};

#endif