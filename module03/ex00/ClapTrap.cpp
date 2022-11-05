/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 01:38:01 by jgomes-c          #+#    #+#             */
/*   Updated: 2022/11/05 01:38:01 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
	: _name(""), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Default ClapTrap constructor called" << std::endl;
	return;
}

ClapTrap::ClapTrap(std::string const &name)
	: _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Name ClapTrap constructor called" << std::endl;
	return;
}

ClapTrap::ClapTrap(const ClapTrap &clapTrap)
{
	std::cout << "Copy ClapTrap constructor called" << std::endl;
	*this = clapTrap;
	return;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap Destructor called" << std::endl;
	return;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &rhs)
{
	std::cout << "Copy ClapTrap assignment operator called" << std::endl;
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_attackDamage = rhs._attackDamage;
	this->_energyPoints = rhs._energyPoints;
	return (*this);
}

//When ClapTrack attacks, it causes its target to lose <attack damage> hit points.
void ClapTrap::attack(const std::string &target){
	std::cout << "***ClapTrap***\n" << this->_name;
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

//When ClapTrap repairs itself, it gets <amount> hit points back.
void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "***ClapTrap***\n" << this->_name;
	if (this->_energyPoints <= 0)
	{
		std::cout << "don't have energy or hit points to be repaired!"
				  << std::endl;
		return;
	}
	if (this->_hitPoints <= 0)
	{
		std::cout << " you already dead, sorry" << std::endl;
		return;
	}
	this->_hitPoints += amount;
	this->_energyPoints--;
	std::cout << " its repairing " << amount << " hit points, now "
			  << "getting " << this->_hitPoints << " health!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "***ClapTrap***\n" << this->_name;
	if (this->_hitPoints <= 0)
	{
		std::cout << "you already dead, sorry" << std::endl;
		return;
	}
	this->_hitPoints -= amount;
	std::cout << " you received " << amount << " points of damage, now ";
	if (this->_hitPoints <= 0)
	{
		std::cout << "he is dead!" << std::endl;
		return;
	}
	std::cout << "getting " << this->_hitPoints << " health!" << std::endl;
}