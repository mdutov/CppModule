/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 23:42:35 by tcynthia          #+#    #+#             */
/*   Updated: 2022/02/19 23:49:37 by tcynthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
    private:
        std::string b_name;
        Weapon      *b_wepon;
    
    public:
        void attack();
        void setWeapon(Weapon &weapon);
        
        HumanB();
        HumanB(std::string name);
        ~HumanB();
};

#endif