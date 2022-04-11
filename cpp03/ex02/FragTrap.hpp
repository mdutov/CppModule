/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 22:12:39 by tcynthia          #+#    #+#             */
/*   Updated: 2022/03/14 22:12:40 by tcynthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		void attack( std::string const & target );
		void highFivesGuys( void );

		FragTrap& operator=( const FragTrap& );

		FragTrap( std::string name = "FragTrap");
		FragTrap( const FragTrap& );		
		~FragTrap( );
};


#endif
