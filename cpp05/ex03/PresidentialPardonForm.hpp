/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 21:03:20 by tcynthia          #+#    #+#             */
/*   Updated: 2022/03/24 21:06:17 by tcynthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	private:
		PresidentialPardonForm& operator= ( const PresidentialPardonForm& other );
	
	public:
		void action( std::string target ) const;
		
		PresidentialPardonForm( std::string target );
		PresidentialPardonForm( const PresidentialPardonForm& other );
		virtual ~PresidentialPardonForm();	
};

#endif
