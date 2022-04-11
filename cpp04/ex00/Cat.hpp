/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 21:02:10 by tcynthia          #+#    #+#             */
/*   Updated: 2022/03/16 22:50:47 by tcynthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
	public:
		void	makeSound( void ) const;
		
		Cat&	operator= ( const Cat& other );

		Cat( std::string type = "Cat" );
		Cat( const Cat& other );
		~Cat( );
};

#endif
