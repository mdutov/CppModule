/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 22:58:13 by tcynthia          #+#    #+#             */
/*   Updated: 2022/02/10 00:15:30 by tcynthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include "./Contact.hpp"

class PhoneBook
{
	private:
		int			_contactsCount;
		Contact		_contacts[8];
	public:
		void	addNewContact(Contact contact);
		void	getNewContact(void);
		void	printContacts(void) const;
		void	printContact(Contact contact) const;

		PhoneBook();
		~PhoneBook();
};

#endif
