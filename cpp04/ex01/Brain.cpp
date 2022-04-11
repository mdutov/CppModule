/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 15:30:33 by tcynthia          #+#    #+#             */
/*   Updated: 2022/03/18 13:20:41 by tcynthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"


// methods

void	Brain::setIdea( std::string idea, int position )
{
	if (position < 100 && position > -1)
		this->_ideas[position] = idea;
}

std::string	Brain::getIdea( int position ) const
{
	if (position < 100 && position > -1)
		return (this->_ideas[position]);
	else
		return ("");
}


// operators

Brain&	Brain::operator=( const Brain& other )
{
	for (int i = 0; i < 100; ++i)
		this->_ideas[i] = other._ideas[i];
	return (*this);
}


// constructors and destructors

Brain::Brain( )
{
	std::cout << "Constructor called for Brain" << std::endl;
}

Brain::Brain( const Brain& other )
{
	std::cout << "Copy constructor called for Brain" << std::endl;
	for (int i = 0; i < 100; ++i)
		this->_ideas[i] = other._ideas[i];
}

Brain::~Brain( )
{
	std::cout << "Destructor called for Brain" << std::endl;
}
