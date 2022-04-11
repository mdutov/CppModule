/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 16:25:09 by tcynthia          #+#    #+#             */
/*   Updated: 2022/03/25 01:38:45 by tcynthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"
class Bureaucrat;

class Form
{
    private:
        const std::string   _name;
        const int           _signRequiredGrade;
        const int           _execRequiredGrade;
        bool                _signed;
    
        Form& operator= ( const Form& other );
    
    public:
        std::string getName( void ) const;
        bool        getFormSignedState( void ) const;
        int         getSignRequiredGrade( void ) const;
        int         getExecRequiredGrade( void ) const;
        
        void        beSigned( const Bureaucrat& bureaucrat );

        class GradeTooLowException : public std::exception
        {
            const char * what () const throw ();
        };
        class GradeTooHighException : public std::exception
        {
            const char * what () const throw ();
        };

        Form( std::string name = "Form", int signRequiredGrade = 150, int execRequiredGrade = 150);
        Form( const Form& other );
        virtual ~Form();
};

std::ostream& operator<< ( std::ostream& os, const Form& data );

#endif
