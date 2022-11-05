/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 12:47:37 by jgomes-c          #+#    #+#             */
/*   Updated: 2022/11/05 12:47:37 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : // constructor
													 Form("PresidentialForm", 145, 137), _target("Julia")
{
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : // constructor target
																   Form("PresidentialForm", 145, 137), _target(target)
{
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &rhs) : // copy
																				 Form("PresidentialForm", 145, 137)
{
	*this = rhs;
	return;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{ // detructor
	return;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{ // operator
	(void)rhs;
	return (*this);
}

// new function EXECUTE

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	{
		if (this->maybeExecute(executor) == false)
			return;
		std::string nameFile = this->_target + "_shrubbery";
		std::ofstream file;
		// C_STR() --- returns a pointer to an array that contains a null-terminated sequence of characters
		file.open(nameFile.c_str(), std::ofstream::out | std::ofstream::trunc);
		if (!file.is_open())
		{
			std::cout << "ewww.. Something wrong creating the file" << std::endl;
			file.close();
			return;
		}

		file
<<"              _{\\ _{\\{==}/}/}__                                              _{\\ _{\\{==}/}/}__                    \n"
<<"             {/{==}{/{==}(\\}{==} _					                         {/{==}{/{==}(\\}{==} _					 \n"
<<"            {/{==}{/{==}(_)\\}{/{==}  _				                        {/{==}{/{==}(_)\\}{/{==}  _				 \n"
<<"         {\\{/(\\}\\}{/{==}\\}{/){==}\\} ==}				                 {\\{/(\\}\\}{/{==}\\}{/){==}\\} ==}		 \n"
<<"        {/{/(_)/}{\\{/)\\}{\\(_){/}/}/}/}				                {/{/(_)/}{\\{/)\\}{\\(_){/}/}/}/}			 \n"
<<"       _{\\{/{/{\\{/{/(_)/}/}/}{\\(/}/}/}				               _{\\{/{/{\\{/{/(_)/}/}/}{\\(/}/}/}			 \n"
<<"      {/{/{\\{\\{\\(/}{\\{==}/}{\\}(_){==}\\}				          {/{/{\\{\\{\\(/}{\\{==}/}{\\}(_){==}\\}		 \n"
<<"      _{\\{/{\\{/(_)\\}/}{/{/{==}\\})\\}{==}				              _{\\{/{\\{/(_)\\}/}{/{/{==}\\})\\}{==}		 \n"
<<"     {/{/{\\{\\(/}{/{\\{\\{==})/}{\\(_)/}/}\\}				         {/{/{\\{\\(/}{/{\\{\\{==})/}{\\(_)/}/}\\}		 \n"
<<"      {\\{==}(_){\\{\\{==}/}(_){==}{==}/})/}				              {\\{==}(_){\\{\\{==}/}(_){==}{==}/})/}		 \n"
<<"       {/{\\{==}{/{\\{\\{==}/}{\\{==}/}\\}(_)				           {/{\\{==}{/{\\{\\{==}/}{\\{==}/}\\}(_)		 \n"
<<"      {/{\\{==}{/){\\{\\{==}/}{\\{\\(/}/}\\}/}				          {/{\\{==}{/){\\{\\{==}/}{\\{\\(/}/}\\}/}		 \n"
<<"       {/{\\{==}(_){\\{\\{\\(/}/}{\\(_)/}/}\\}				           {/{\\{==}(_){\\{\\{\\(/}/}{\\(_)/}/}\\}		 \n"
<<"         {/({/{\\{/{\\{==}(_){==}/}\\}/}(\\}				                 {/({/{\\{/{\\{==}(_){==}/}\\}/}(\\}		 \n"
<<"          (_){/{==}{\\{==}/}{\\{\\)/}/}(_)				                  (_){/{==}{\\{==}/}{\\{\\)/}/}(_)			 \n"
<<"            {/{/{\\{==}{/{\\{\\{\\(_)/}					                    {/{/{\\{==}{/{\\{\\{\\(_)/}				 \n"
<<"             {/{\\{\\{==}/}{\\{==}/}						                     {/{\\{\\{==}/}{\\{==}/}				 \n"
<<"              {){/ {==}{==} \\}\\}						                      {){/ {==}{==} \\}\\}					 \n"
<<"              (_)  \\.-..-/							                          (_)  \\.-..-/							 \n"
<<"          __...--- |.-.-.| --...__					                      __...--- |.-.-.| --...__					 \n"
<<"   _...--    .-.   |.-.-.|  . -.   --..__			               _...--    .-.   |.-.-.|  . -.   --..__			 \n"
<<" -     . .  . .    |..-._| .  . .  .   jgc		                 -     . .  . .    |..-._| .  . .  .   jgc	\n	"                                         
<<" .  .-  .    .--.  | .-..|    .  .  . .				             .  .-  .    .--.  | .-..|    .  .  . .				 \n"
<<"          . ..     |.-_.-|							                      . ..     |.-_.-|							 \n"
<<"  .  .  .       _.-|-._ -|-._  .  .  .				              .  .  .       _.-|-._ -|-._  .  .  .				 \n"
<<"              ..   |.- .-|   ..						                          ..   |.- .-|   ..						 \n"
<<"  ..-.   . .  ..   `-._.-o   ..  .  - .				              ..-.   . .  ..   `-._.-o   ..  .  - .				 \n"
<<"   .-. .        ... . . . . -.     .  .				               .-. .        ... . . . . -.     .  .				 \n"
<<"        .      ~,										                .      ~,									 \n"
<<"    .       .   |\\   .    . .-.						                .       .   |\\   .    . .-.					 \n";

			 
		file.close();

		std::cout << "ASCII trees created!" << std::endl;
		return;
	}
}