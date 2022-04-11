/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 15:30:30 by tcynthia          #+#    #+#             */
/*   Updated: 2022/03/18 13:39:42 by tcynthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class Animal
{
	protected:
		std::string _type;

	public:
		virtual void		makeSound( void ) const;
		virtual std::string	getType( void ) const;
		virtual void		printIdeas( int startPos, int endPos ) const;
		virtual void		setIdea( std::string idea, int pos );
		
		Animal&				operator= ( const Animal& other );
		
		Animal( std::string type = "Animal");
		Animal( const Animal& other );
		virtual ~Animal( );
};

#endif