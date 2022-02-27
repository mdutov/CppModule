/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 23:41:15 by tcynthia          #+#    #+#             */
/*   Updated: 2022/02/19 23:41:17 by tcynthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *Horde;
    int n;
    int i = 0;
    
    std::cout << "zomdiHorde: ";
    std::cin >> n;
    std::cout << "zombiHorde go!" << std::endl;

    Horde = zombieHorde(n, "Zombi_");
    
    while(i < n)
    {
        Horde[i].announcement();
        i++;
    }
    
    delete [] Horde;

    std::cout << "zombiHorde destroyed!" << std::endl;

    return(0);    
}
