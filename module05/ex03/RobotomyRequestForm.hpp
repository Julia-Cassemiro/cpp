/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 12:27:21 by lpaulo-d          #+#    #+#             */
/*   Updated: 2023/03/03 02:25:42 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_FORM_HPP_
#define ROBOTOMY_REQUEST_FORM_HPP_

#include "AForm.hpp"
#include <ctime>
#include <cstdlib>

class RobotomyRequestForm : public AForm {
	public:
		RobotomyRequestForm( void );
		RobotomyRequestForm( std::string target );
		RobotomyRequestForm( RobotomyRequestForm const& robo_instance );
		~RobotomyRequestForm( void );
		RobotomyRequestForm & operator=( RobotomyRequestForm const& robo_instance );

		void	execute( Bureaucrat const & executor ) const;

	private:
		std::string	_target;

};

#endif
