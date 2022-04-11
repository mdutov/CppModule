/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 23:41:34 by tcynthia          #+#    #+#             */
/*   Updated: 2022/02/20 01:31:38 by tcynthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
    private:
    	std::string name;
    	int index;
		
    public:
    	void set_name(std::string &name, int i);
    	void announcement();
		
		Zombie();
		Zombie(const std::string name);
    	~Zombie();
};

Zombie	*zombieHorde(int N, std::string name);

#endif
