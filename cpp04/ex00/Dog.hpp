/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 21:02:59 by tcynthia          #+#    #+#             */
/*   Updated: 2022/03/16 22:50:39 by tcynthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
	public:
		void	makeSound( void ) const;

		Dog& 	operator= ( const Dog& other );

		Dog( std::string type = "Dog" );
		Dog( const Dog& other );
		~Dog( );
};

#endif
