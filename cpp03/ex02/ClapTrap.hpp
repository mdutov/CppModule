/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 22:12:32 by tcynthia          #+#    #+#             */
/*   Updated: 2022/03/14 22:12:33 by tcynthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>


class ClapTrap
{
	protected:
		std::string _name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;
	
	public:
		void attack( std::string const & target );
		void takeDamage( unsigned int amount );
		void beRepaired( unsigned int amount );

		ClapTrap& operator=( const ClapTrap& ClapTrap );

		ClapTrap( std::string name = "ClapTrap");
		ClapTrap( const ClapTrap & clapTrap );
		~ClapTrap( );
};


#endif
