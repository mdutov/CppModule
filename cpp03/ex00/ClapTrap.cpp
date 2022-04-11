/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 01:58:14 by tcynthia          #+#    #+#             */
/*   Updated: 2022/03/15 17:44:48 by tcynthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


// functions

void ClapTrap::attack( std::string const & target )
{
	std::cout << "ClapTrap " << this->_name << " attacks "<< target << " and causes " << this->_attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage( unsigned int amount )
{
	std::cout << "ClapTrap " << this->_name << " is attacked and lost " << amount << " energy points" << std::endl;
	this->_energyPoints -= amount;
	if (this->_energyPoints < 0)
		this->_energyPoints = 0;

}

void ClapTrap::beRepaired( unsigned int amount )
{
	std::cout << "ClapTrap " << this->_name << " is repaired by " << amount << " energy points" << std::endl;
	this->_energyPoints += amount;
}


// overloading the assignment operator

ClapTrap&	ClapTrap::operator=(const ClapTrap& clapTrap)
{
	this->_name = clapTrap._name;
	this->_hitPoints = clapTrap._hitPoints;
	this->_energyPoints = clapTrap._energyPoints;
	this->_attackDamage = clapTrap._attackDamage;
	return (*this);
}


// constructor and destructor

ClapTrap::ClapTrap( std::string name )
{
	std::cout << "Constructor called for " << name << std::endl; 
	this->_name = name;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
}

ClapTrap::ClapTrap( const ClapTrap& clapTrap)
{
	this->_name = clapTrap._name;
	this->_hitPoints = clapTrap._hitPoints;
	this->_energyPoints = clapTrap._energyPoints;
	this->_attackDamage = clapTrap._attackDamage;
}

ClapTrap::~ClapTrap( )
{
	std::cout << "Destructor called for " << this->_name << std::endl;
}
