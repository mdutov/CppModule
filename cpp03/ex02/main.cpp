/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 22:12:19 by tcynthia          #+#    #+#             */
/*   Updated: 2022/03/15 17:56:38 by tcynthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ClapTrap A("A");
	ScavTrap B("B");
	FragTrap C("C");
	std::cout << std::endl;
	
	A.attack("B");
	B.attack("A");
	C.attack("B");
	std::cout << std::endl;

	B.beRepaired(10);
	C.takeDamage(10);
	std::cout << std::endl;

	C.highFivesGuys();
	std::cout << std::endl;

	return (0);
}
