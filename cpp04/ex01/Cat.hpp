/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 15:53:38 by tcynthia          #+#    #+#             */
/*   Updated: 2022/03/17 15:53:39 by tcynthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain*	_brain;

	public:
		void	makeSound( void ) const;
		void	printIdeas( int startPos, int endPos ) const; 
		void	setIdea( std::string idea, int pos );

		Cat& operator= ( const Cat& other );
		
		Cat( std::string type = "Cat" );
		Cat( const Cat& other );
		~Cat( );
};

#endif
