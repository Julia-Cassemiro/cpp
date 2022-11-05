/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 01:35:21 by jgomes-c          #+#    #+#             */
/*   Updated: 2022/11/05 01:35:21 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.hpp"

int	main( void ) {
	ScavTrap art( "Julia" );

	art.attack( "Caio" );
	art.takeDamage( 3 );
	art.takeDamage( 50 );
	art.beRepaired( 3 );
	art.guardGate( );
	art.takeDamage( 50 );
}