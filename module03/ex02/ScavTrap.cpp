/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 02:04:13 by jgomes-c          #+#    #+#             */
/*   Updated: 2022/11/05 02:04:13 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->_name = "";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	return;
}

ScavTrap::ScavTrap(const ScavTrap &rhs) : ClapTrap(rhs)
{
	std::cout << "Copy ScavTrap constructor called" << std::endl;
	*this = rhs;
	return;
}

ScavTrap::ScavTrap(std::string const &name)
	: ClapTrap(name)
{
	std::cout << "Name ScavTrap constructor called" << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	return;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap Destructor called" << std::endl;
	return;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &rhs)
{
	std::cout << "Copy ScavTrap assignment operator called" << std::endl;
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	return (*this);
}

void	ScavTrap::guardGate( void ) {
	std::cout << "***ScavTrap***\n" << this->_name;
	std::cout << " is now in Gate kepper mode!" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	std::cout << "***ScavTrap***\n" << this->_name;
	if (this->_energyPoints <= 0)
	{
		std::cout << "don't have energy or hit points to attack!"
				  << std::endl;
		return;
	}
	if (this->_hitPoints <= 0)
	{
		std::cout << " you already dead, sorry" << std::endl;
		return;
	}
	this->_energyPoints--;
	std::cout << " attacks " << target << ", causing "
			  << this->_attackDamage << " points of damage!" << std::endl;
}