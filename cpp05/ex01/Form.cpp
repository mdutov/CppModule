/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 16:01:31 by tcynthia          #+#    #+#             */
/*   Updated: 2022/03/25 01:47:40 by tcynthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"


// methods

std::string Form::getName( void ) const
{
    return (this->_name);
}

int Form::getExecRequiredGrade( void ) const
{
    return (this->_execRequiredGrade);
}

int Form::getSignRequiredGrade( void ) const
{
    return (this->_signRequiredGrade);
}

bool Form::getFormSignedState ( void ) const
{
    return (this->_signed);
}

void Form::beSigned( const Bureaucrat& bureaucrat )
{
    if (this->_signRequiredGrade < bureaucrat.getGrade())
        throw Form::GradeTooLowException();
    else
        this->_signed = true;
}


// operators

Form& Form::operator=( const Form& other )
{
    if (this != &other)
    {
        std::cout << "const _name, and const _grades not changed. _signed changed succesfully" << std::endl;
        this->_signed = other._signed;
    }
    return (*this);
}

std::ostream&	operator<< ( std::ostream& os, const Form& data )
{
	os << "Form " << data.getName() << " has: signRequiredGrade = " << data.getSignRequiredGrade() << "; " \
	<< "execRequiered Grade = " << data.getExecRequiredGrade() << "; signedState = " << data.getFormSignedState() << "\n";
	return (os);
}


// exception

const char * Form::GradeTooLowException::what() const throw ()
{
    return ("Grade is too low");
}

const char * Form::GradeTooHighException::what() const throw ()
{
    return ("Grade is too high");
}


// constructor and destructor

Form::Form( std::string name, int signRequiredGrade, int execRequiredGrade) 
        : _name(name), _signRequiredGrade(signRequiredGrade), _execRequiredGrade(execRequiredGrade), _signed(false)
{
    if (this->_signRequiredGrade > 150 || this->_execRequiredGrade > 150)
        throw Form::GradeTooLowException();
    else if (this->_signRequiredGrade < 1 || this->_execRequiredGrade < 1)
        throw Form::GradeTooHighException();    
}

Form::Form( const Form& other )
        : _name(other._name), _signRequiredGrade(other._signRequiredGrade), _execRequiredGrade(other._execRequiredGrade)
{
    this->_signed = other._signed;
    if (this->_signRequiredGrade > 150 || this->_execRequiredGrade > 150)
        throw Form::GradeTooLowException();
    else if (this->_signRequiredGrade < 1 || this->_execRequiredGrade < 1)
        throw Form::GradeTooHighException();
}

Form::~Form()
{
    
}
