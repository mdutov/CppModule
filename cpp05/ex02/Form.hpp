/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 20:59:24 by tcynthia          #+#    #+#             */
/*   Updated: 2022/03/24 21:00:26 by tcynthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"
#include <cstdlib>

class Bureaucrat;

class Form
{
    private:
        const std::string   _name;
        const int           _signRequiredGrade;
        const int           _execRequiredGrade;
        bool                _signed;
		const std::string	_target;
    
	protected:
        Form& operator= ( const Form& other );
        Form( std::string name, int signRequiredGrade, int execRequiredGrade, std::string target);

    public:
        int         getSignRequiredGrade( void ) const;
        int         getExecRequiredGrade( void ) const;
        bool        getFormSignedState( void ) const;
        std::string getName( void ) const;
		std::string getTarget( void ) const;
        void        beSigned( const Bureaucrat& bureaucrat );
		void        execute( Bureaucrat const & executor ) const;
		virtual void action( std::string target ) const = 0;

        class GradeTooLowException : public std::exception
        {
            const char * what () const throw ();
        };
        class GradeTooHighException : public std::exception
        {
            const char * what () const throw ();
        };
		class FormNotSignedException : public std::exception
		{
			const char * what () const throw ();
		};

        Form( std::string name = "Form", int signRequiredGrade = 150, int execRequiredGrade = 150);
        Form( const Form& other );
        virtual ~Form();
};

std::ostream& operator<< ( std::ostream& os, const Form& data );

#endif
