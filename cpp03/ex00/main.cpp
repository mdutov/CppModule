/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 01:57:58 by tcynthia          #+#    #+#             */
/*   Updated: 2022/03/15 17:44:42 by tcynthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


int main()
{
	ClapTrap A("A");
	ClapTrap B("B");
	std::cout << std::endl;
	
	A.attack("B");
	B.attack("A");
	std::cout << std::endl;
	
	A.takeDamage(5);
	A.beRepaired(7);
	std::cout << std::endl;

	return(0);
}
 