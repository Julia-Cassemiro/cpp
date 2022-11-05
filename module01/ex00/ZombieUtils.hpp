/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 22:09:09 by jgomes-c          #+#    #+#             */
/*   Updated: 2022/11/01 22:09:09 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_UTILS_HPP
# define ZOMBIE_UTILS_HPP

#include "Zombie.hpp"

class ZombieUtils {

public:

// It creates a zombie, name it, and return it so you can use it outside of the function
// scope.
	Zombie* newZombie( std::string name );
// It creates a zombie, name it, and the zombie announces itself.
	void	randomChump( std::string name );

};

#endif