/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 22:58:24 by tcynthia          #+#    #+#             */
/*   Updated: 2022/02/10 00:40:31 by tcynthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./hdrs/PhoneBook.hpp"
#include "./hdrs/Contact.hpp"



int main(void)
{
	PhoneBook phoneBook;
	std::string line;

	std::cout << "Enter new command" << std::endl;
	while (std::cin >> line)
	{
		if (line == "EXIT")
			return 0;
		else if (line == "ADD")
			phoneBook.getNewContact();
		else if (line == "SEARCH")
			phoneBook.printContacts();
		else
			std::cout << "[X] Error: 'ADD'/'EXIT'/'SEARCH' expected" << std::endl;
		std::cout << "Enter new command:" << std::endl;
	}
}
