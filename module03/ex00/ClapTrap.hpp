/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 01:35:42 by jgomes-c          #+#    #+#             */
/*   Updated: 2022/11/05 01:35:42 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {

private: 
	
	std::string	_name;
	int			_hitPoints;
	int			_energyPoints;
	int			_attackDamage;

public:

	ClapTrap( void ); //constructor
	ClapTrap( std::string const &name ); //Name ClapTrap constructor
	ClapTrap( const ClapTrap &clapTrap ); //copy
	~ClapTrap( void ); //Destructor
	ClapTrap & operator=( ClapTrap const & rhs ); //operator

	void	attack( const std::string&  target );
	void	takeDamage( unsigned int amount );
	void	beRepaired( unsigned int amount );
	
};

#endif