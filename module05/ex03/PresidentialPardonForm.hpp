/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 12:06:57 by lpaulo-d          #+#    #+#             */
/*   Updated: 2023/03/03 02:23:08 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_PARDON_FORM_HPP_
#define PRESIDENTIAL_PARDON_FORM_HPP_

#include "AForm.hpp"

class PresidentialPardonForm: public AForm {

	public:
		PresidentialPardonForm( void );
		PresidentialPardonForm( std::string target );
		PresidentialPardonForm( PresidentialPardonForm const& ppf_instance );
		~PresidentialPardonForm( void );
		PresidentialPardonForm& operator=( PresidentialPardonForm const& ppf_instance );

		void execute( Bureaucrat const& executor ) const;

	private:
		std::string	_target;
};

#endif
