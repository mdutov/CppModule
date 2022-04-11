/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 21:02:36 by tcynthia          #+#    #+#             */
/*   Updated: 2022/03/16 22:50:43 by tcynthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		void		makeSound( void ) const;

		WrongCat& 	operator= ( const WrongCat& other );
	
		WrongCat( std::string type = "WrongCat" );
		WrongCat( const WrongCat& other );
		~WrongCat( );
};

#endif
