/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 16:07:52 by tcynthia          #+#    #+#             */
/*   Updated: 2022/03/17 16:08:57 by tcynthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
	private:
		Brain* _brain;

	public:
		void	makeSound( void ) const;
		void	printIdeas( int startPos, int endPos ) const;
		void	setIdea( std::string idea, int pos );

		Dog& operator= ( const Dog& other );

		Dog( std::string type = "Dog" );
		Dog( const Dog& other );
		~Dog( );	
};

#endif
