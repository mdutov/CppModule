/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 21:01:21 by tcynthia          #+#    #+#             */
/*   Updated: 2022/03/18 15:53:37 by tcynthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
	protected:
		std::string _type;
		
	public:
		virtual void		makeSound( void ) const;
		virtual std::string	getType( void ) const;
		
		Animal&				operator= ( const Animal& other );
		
		Animal( std::string type = "Animal");
		Animal( const Animal& other );
		virtual ~Animal( );
};

#endif
