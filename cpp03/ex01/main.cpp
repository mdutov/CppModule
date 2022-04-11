/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 14:33:59 by tcynthia          #+#    #+#             */
/*   Updated: 2022/03/15 17:49:22 by tcynthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap A("A");
	ScavTrap B("B");
	std::cout << std::endl;
	
	A.attack("B");
	B.attack("A");
	std::cout << std::endl;
	
	B.takeDamage(10);
	A.beRepaired(10);
	std::cout << std::endl;

	B.guardGate();
	std::cout << std::endl;
	
	return (0);
}
