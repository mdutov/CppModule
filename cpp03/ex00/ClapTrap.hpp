/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 01:57:50 by tcynthia          #+#    #+#             */
/*   Updated: 2022/03/14 01:57:52 by tcynthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>


class ClapTrap
{
	private:
		std::string _name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;
	
	public:
		void attack( std::string const & target );
		void takeDamage( unsigned int amount );
		void beRepaired( unsigned int amount );

		ClapTrap& operator= ( const ClapTrap& ClapTrap );

		ClapTrap( std::string name );
		ClapTrap( const ClapTrap & clapTrap );
		~ClapTrap( );
};


#endif
