/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 15:30:36 by tcynthia          #+#    #+#             */
/*   Updated: 2022/03/17 16:23:45 by tcynthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
	private:
		std::string _ideas[100];

	public:
		void		setIdea( std::string idea, int position );
		std::string	getIdea( int position ) const;
		
		Brain& 		operator=( const Brain& other );
		
		Brain( );
		Brain( const Brain& other );
		~Brain( );
};

#endif
