/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 23:42:35 by tcynthia          #+#    #+#             */
/*   Updated: 2022/02/19 23:58:52 by tcynthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::attack()
{
    if(b_wepon)
        std::cout << b_name << " attacks with his " << b_wepon->getType() << std::endl;
    else
        std::cout << b_name << " no weapon! " << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->b_wepon = &weapon;
}



HumanB::HumanB() {}

HumanB::HumanB(std::string name)
{
    this->b_name = name;
}

HumanB::~HumanB() {}
