/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.HPP                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 02:11:11 by jgomes-c          #+#    #+#             */
/*   Updated: 2022/11/05 02:11:11 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

public:

	ScavTrap( void );
	ScavTrap( const ScavTrap & rhs );
	ScavTrap( std::string const & name );
	~ScavTrap( void );

	ScavTrap & operator=( ScavTrap const & rhs );

	void	guardGate( void );
	void	attack( const std::string&  target );

};

#endif