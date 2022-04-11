/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 15:54:08 by tcynthia          #+#    #+#             */
/*   Updated: 2022/03/25 01:46:56 by tcynthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


// methods

int Bureaucrat::getGrade( void ) const
{
    return (this->_grade);
}

std::string Bureaucrat::getName( void ) const
{
    return (this->_name);
}

void Bureaucrat::incrementGrade( void )
{
    if (this->_grade != _highestGrade)
        this->_grade--;
    else
        throw Bureaucrat::GradeTooHighException();
    
}

void Bureaucrat::decrementGrade( void )
{
    if (this->_grade != _lowestGrade)
        this->_grade++;
    else
        throw Bureaucrat::GradeTooLowException();
}

int Bureaucrat::getHighestGrade( void ) const
{
    return (Bureaucrat::_highestGrade);
}

int Bureaucrat::getLowestGrade( void ) const
{
    return (Bureaucrat::_lowestGrade);
}

void    Bureaucrat::signForm( Form& form )
{
    if (this->_grade <= form.getSignRequiredGrade())
    {
        form.beSigned(*this);
        std::cout << "Bureaucrat " << this->_name << " signs form " << form.getName() << "\n" ;
    }
    else
    {
        std::cout << "Bureaucrat " << this->_name << " cannot sign form " << form.getName() << ": Grade is too low" << std::endl;
    }
}


// operators

Bureaucrat& Bureaucrat::operator=( const Bureaucrat& other )
{
    if (this != &other)
    {
        std::cout << "Cannot assign const _name. _grade assigned" << std::endl;
        this->_grade = other._grade;
    }
    return (*this);
}

std::ostream& operator<< ( std::ostream& os, const Bureaucrat& data )
{
	os << data.getName() << " bureaucrat grade is " << data.getGrade() ;
	return (os);
}


// exception

const char * Bureaucrat::GradeTooHighException::what() const throw ()
{
    return ("Grade is too high");
}

const char * Bureaucrat::GradeTooLowException::what() const throw ()
{
    return ("Grade is too low");
}


// constructor and destructor

Bureaucrat::Bureaucrat( std::string name ) : _name(name)
{
    this->_grade = _lowestGrade;
}

Bureaucrat::Bureaucrat( std::string name, int grade ) : _name(name)
{
    if (grade < _highestGrade)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > _lowestGrade)
        throw Bureaucrat::GradeTooLowException();
    else
        this->_grade = grade;
}

Bureaucrat::Bureaucrat( const Bureaucrat& other ) : _name(other._name), _grade(other._grade)
{

}

Bureaucrat::~Bureaucrat()
{
    
}
