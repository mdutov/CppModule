/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 22:58:37 by tcynthia          #+#    #+#             */
/*   Updated: 2022/02/10 00:39:12 by tcynthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./hdrs/Contact.hpp"
#include <iostream>



Contact::Contact()
{

}

Contact::~Contact()
{

}



void Contact::setFirstName(std::string firstName)
{
	this->_firstName = firstName;
}

void Contact::setLastName(std::string lastName)
{
	this->_lastName = lastName;
}

void Contact::setNickname(std::string nickname)
{
	this->_nickname = nickname;
}

void Contact::setPhoneNumber(std::string phoneNumber)
{
	this->_phoneNumber = phoneNumber;
}

void Contact::setDarkestSecret(std::string darkestSecret)
{
	this->_darkestSecret = darkestSecret;
}



std::string Contact::getFirstName(void) const
{
	return this->_firstName;
}

std::string Contact::getLastName(void) const
{
	return this->_lastName;
}

std::string Contact::getNickname(void) const
{
	return this->_nickname;
}

std::string Contact::getPhoneNumber(void) const
{
	return this->_phoneNumber;
}

std::string Contact::getDarkestSecret(void) const
{
	return this->_darkestSecret;
}
