/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 23:41:27 by tcynthia          #+#    #+#             */
/*   Updated: 2022/02/19 23:41:29 by tcynthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announcement()
{
	std::cout << name << index << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::set_name(std::string &name, int i)
{
	this->name = name;
	this->index = i;
}



Zombie::Zombie()
{
	this->name = "none_name";
	this->index = 0;
}

Zombie::Zombie(const std::string name)
{
	this->name = name;
	this->index = 0;
}

Zombie::~Zombie()
{
	std::cout << name << index << " is dead - destructor executed, zombi destroyed" << std::endl;
}
