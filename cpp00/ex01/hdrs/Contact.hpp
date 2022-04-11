/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 22:58:30 by tcynthia          #+#    #+#             */
/*   Updated: 2022/02/10 00:00:38 by tcynthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact
{
	private:
		std::string	_firstName;
		std::string _lastName;
		std::string _nickname;
		std::string	_phoneNumber;
		std::string _darkestSecret;
		
	public:
		void setFirstName(std::string);		
		void setLastName(std::string);		
		void setNickname(std::string);		
		void setPhoneNumber(std::string);
		void setDarkestSecret(std::string);

		std::string getFirstName(void) const;
		std::string getLastName(void) const;
		std::string getNickname(void) const;
		std::string getPhoneNumber(void) const;
		std::string getDarkestSecret(void) const;

		Contact();
		~Contact();	
};

#endif
