/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 16:17:17 by tcynthia          #+#    #+#             */
/*   Updated: 2022/03/17 16:17:57 by tcynthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		void	makeSound( void ) const;

		WrongCat& operator= ( const WrongCat& other );

		WrongCat( std::string type = "WrongCat" );
		WrongCat( const WrongCat& other );
		~WrongCat( );
};

#endif
