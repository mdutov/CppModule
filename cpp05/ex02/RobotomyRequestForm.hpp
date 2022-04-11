/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 21:08:31 by tcynthia          #+#    #+#             */
/*   Updated: 2022/03/24 21:18:39 by tcynthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTEDFORM_HPP
# define ROBOTOMYREQUESTEDFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	private:
		RobotomyRequestForm& operator= ( const RobotomyRequestForm& other );
	
	public:
		void action( std::string target ) const;

		RobotomyRequestForm( std::string target );
		RobotomyRequestForm( const RobotomyRequestForm& other );
		virtual ~RobotomyRequestForm();
};

#endif
