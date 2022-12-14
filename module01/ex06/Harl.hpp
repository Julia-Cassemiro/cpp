/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 01:20:39 by jgomes-c          #+#    #+#             */
/*   Updated: 2022/11/02 01:20:39 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H

#include <iostream>
#include <string>

class Harl {

private:

	void	_debug( void );
	void	_info( void );
	void	_warning( void );
	void	_error( void );
	void	_unknown( void );
	void	_levelAndAbove(int i);

public:

	Harl( void );
	~Harl( void );

	void	complain( std::string level );

};

#endif