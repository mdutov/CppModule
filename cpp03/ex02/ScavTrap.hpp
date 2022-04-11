/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 22:12:36 by tcynthia          #+#    #+#             */
/*   Updated: 2022/03/14 22:12:37 by tcynthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		void	attack( std::string const & target );
		void	guardGate( void );

		ScavTrap& operator=(const ScavTrap& ScavTrap);

		ScavTrap( std::string name = "ScavTrap");
		ScavTrap( const ScavTrap& scavTrap);
		~ScavTrap( );
};


#endif
