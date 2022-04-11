/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 22:12:51 by tcynthia          #+#    #+#             */
/*   Updated: 2022/03/14 22:12:52 by tcynthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


// functions

void FragTrap::attack( std::string const & target)
{
	std::cout << "FragTrap " << this->_name << " attacks "<< target << " and couse " << this->_attackDamage << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys( void )
{
	std::cout << "FragTrap "<< this->_name << " highFivesGuys function done!" << std::endl;
}


// overloading the assignment operator

FragTrap&	FragTrap::operator=( const FragTrap& fragTrap)
{
	ClapTrap::operator=(fragTrap);
	return (*this);
}


// constuctor and destructor

FragTrap::FragTrap( std::string name) : ClapTrap(name)
{
	std::cout << "Constructor called for FragTrap " << this->_name << std::endl; 
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap( const FragTrap& fragTrap) : ClapTrap( fragTrap )
{

}

FragTrap::~FragTrap( )
{
	std::cout << "Destructor called for FragTrap " << this->_name << std::endl; 
}
