/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 22:58:05 by tcynthia          #+#    #+#             */
/*   Updated: 2022/02/10 00:39:46 by tcynthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./hdrs/PhoneBook.hpp"



PhoneBook::PhoneBook()
{
	this->_contactsCount = 0;
}

PhoneBook::~PhoneBook()
{

}



void PhoneBook::addNewContact(Contact contact)
{
	this->_contacts[this->_contactsCount % 8] = contact;
	this->_contactsCount++;
}

void PhoneBook::getNewContact(void)
{
	Contact contact;
	std::string line;
	
	std::cout << "Enter first name: ";
	std::cin >> line;
	contact.setFirstName(line);
	std::cout << "Enter last name: ";
	std::cin >> line;
	contact.setLastName(line);
	std::cout << "Enter nickname: ";
	std::cin >> line;
	contact.setNickname(line);
	std::cout << "Enter phone number: ";
	std::cin >> line;
	contact.setPhoneNumber(line);
	std::cout << "Enter darkest secret: ";
	std::cin >> line;
	contact.setDarkestSecret(line);
	addNewContact(contact);
}



static std::string contactFormatString(std::string field)
{
	if (field.size() > 10)
		return (field.substr(0, 9) + ".");
	else
		return (field);
}

void PhoneBook::printContact(Contact contact) const
{
	std::cout << "Contact info: ";
	std::cout << contact.getFirstName() << " | ";
	std::cout << contact.getLastName() << " | ";
	std::cout << contact.getNickname() << " | ";
	std::cout << contact.getPhoneNumber() << " | ";
	std::cout << contact.getDarkestSecret() << " |" << std::endl;
}

void PhoneBook::printContacts(void) const
{
	int	index;

	std::cout << "-----------------CONTACTS-----------------" << std::endl;
	std::cout << "|" << std::setw(10) << "index" << "|";
	std::cout << std::setw(10) << "first name" << "|";
	std::cout << std::setw(10) << "last name" << "|";
	std::cout << std::setw(10) << "nickname" << "|" << std::endl;
	for (int i = 0; i < this->_contactsCount && i < 8; i++)
	{
		std::cout << "|" << std::setw(10) << i + 1 << "|";
		std::cout << std::setw(10) << contactFormatString(this->_contacts[i].getFirstName()) << "|"; 
		std::cout << std::setw(10) << contactFormatString(this->_contacts[i].getLastName()) << "|";
		std::cout << std::setw(10) << contactFormatString(this->_contacts[i].getNickname()) << "|" << std::endl;
	}
	std::cout << "Enter contact index: ";
	std::string command;
	std::cin >> command;
	index = command[0] - '0';
	if (command.size() > 1 || index < 1 || index > this->_contactsCount)
	{
		std::cout << "Wrong index" << std::endl;
		return ;
	}
	else
		printContact(this->_contacts[index - 1]);
}
