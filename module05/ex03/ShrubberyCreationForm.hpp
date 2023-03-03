/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 12:39:41 by lpaulo-d          #+#    #+#             */
/*   Updated: 2023/03/03 02:35:01 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_FORM_HPP_
#define SHRUBBERY_CREATION_FORM_HPP_

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm
{
private:
	std::string _target;

public:
	ShrubberyCreationForm(void);
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm const &rhs);
	~ShrubberyCreationForm(void);
	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &rhs);

	void execute(Bureaucrat const &executor) const;
};

#endif
