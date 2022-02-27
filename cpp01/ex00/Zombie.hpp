/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 23:40:42 by tcynthia          #+#    #+#             */
/*   Updated: 2022/02/19 23:40:49 by tcynthia         ###   ########.fr       */
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

public:
    void announce(void);
    void set_name(const std::string &name);

    Zombie();
    Zombie(const std::string &name);
    ~Zombie();
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif
