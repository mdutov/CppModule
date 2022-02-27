/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 23:41:38 by tcynthia          #+#    #+#             */
/*   Updated: 2022/02/19 23:41:42 by tcynthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie *Horde = new Zombie[N];
	int i = 0;

	while(i < N)
	{
		Horde[i].set_name(name, i);
		i++;
	}

	return(Horde);
}
