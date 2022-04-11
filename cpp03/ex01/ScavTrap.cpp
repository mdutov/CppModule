/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 14:34:08 by tcynthia          #+#    #+#             */
/*   Updated: 2022/03/14 22:17:28 by tcynthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


// functions

void	ScavTrap::attack( std::string const & target )
{
	std::cout << "ScavTrap " << this->_name << " attacks " << target << " and causes " << this->_attackDamage << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate( void )
{
	std::cout << "ScavTrap " << this->_name << " is now in Gate Keeper mode" << std::endl;
}


// overloading the assignment operator

ScavTrap& ScavTrap::operator=(const ScavTrap& scavTrap)
{
	ClapTrap::operator=(scavTrap);
	return (*this);
}


// constuctor and destructor

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name)
{
	std::cout << "Constructor called for ScavTrap " << this->_name << std::endl; 
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap( const ScavTrap& scavTrap) : ClapTrap (scavTrap)
{

}

ScavTrap::~ScavTrap( )
{
	std::cout << "Destructor called for ScavTrap " << this->_name << std::endl; 
}
