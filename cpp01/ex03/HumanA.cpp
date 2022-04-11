/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 23:42:35 by tcynthia          #+#    #+#             */
/*   Updated: 2022/02/19 23:42:38 by tcynthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void HumanA::attack()
{
    std::cout << a_name << " attacks with his " << a_weapon.getType() << std::endl;
}



HumanA::HumanA(std::string name, Weapon &weapon) : a_name(name), a_weapon(weapon)
{
}

HumanA::~HumanA() {}
