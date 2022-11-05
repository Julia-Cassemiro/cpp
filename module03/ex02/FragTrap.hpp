/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 02:16:33 by jgomes-c          #+#    #+#             */
/*   Updated: 2022/11/05 02:16:33 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

public:

	FragTrap( void );
	FragTrap( const FragTrap & rhs );
	FragTrap( std::string const & name );
	~FragTrap( void );

	FragTrap & operator=( const FragTrap & rhs );

	void	highFivesGuys( void );
};

#endif