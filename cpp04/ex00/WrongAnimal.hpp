/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 21:02:26 by tcynthia          #+#    #+#             */
/*   Updated: 2022/03/16 22:57:06 by tcynthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
	protected:
		std::string _type;
	public:
		WrongAnimal( std::string type = "WrongAnimal");

		WrongAnimal( const WrongAnimal& other );
		WrongAnimal& operator= ( const WrongAnimal& other );
		
		virtual ~WrongAnimal( );
		
		void	makeSound( void ) const;
		std::string	getType( void ) const;
};

#endif