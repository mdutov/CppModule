/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 23:40:33 by tcynthia          #+#    #+#             */
/*   Updated: 2022/02/19 23:40:35 by tcynthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::set_name(const std::string &name)
{
	this->name = name;
}



Zombie::Zombie()
{
}

Zombie::Zombie(const std::string &name)
{
	this->name = name;
}

Zombie::~Zombie()
{
	std::cout << name << " is dead: destructor executed" << std::endl; 
}
