/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 16:12:12 by tcynthia          #+#    #+#             */
/*   Updated: 2022/03/17 16:12:59 by tcynthia         ###   ########.fr       */
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
		void		makeSound( void ) const;
		std::string	getType( void ) const;

		WrongAnimal& operator= ( const WrongAnimal& other );
		
		WrongAnimal( std::string type = "WrongAnimal");
		WrongAnimal( const WrongAnimal& other );
		virtual ~WrongAnimal( );
};

#endif
