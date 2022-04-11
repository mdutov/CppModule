/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 20:39:53 by tcynthia          #+#    #+#             */
/*   Updated: 2022/03/31 11:03:44 by tcynthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdexcept>
#include <exception>
#include <ctime>
#include <cstdlib>

template <typename T>
class Array
{
	private:
		T*				_content;
		unsigned int	_size;
	
	public:
		Array<T>& operator=( Array<T>& other);
		Array<T>& operator=( const Array<T>& other);

		T& operator[]( unsigned int index );
		const T& operator[] (unsigned int index ) const ;

		Array( unsigned int size = 0 );
		Array( Array<T>& other );
		Array( const Array<T>& other );
		virtual ~Array();
};


// operators

template <typename T>
Array<T>&	Array<T>::operator=( const Array<T>& other )
{
	if (this != &other)
	{
		if (!this->_content)
			delete this->_content;
		this->_size = other._size;
		this->_content = new T[this->_size];
		for (unsigned int i = 0; i < this->_size; i++)
			this->_content[i] = other._content[i];
	}
	return (*this);
}

template <typename T>
Array<T>&	Array<T>::operator=( Array<T>& other )
{
	if (this != &other)
	{
		if (!this->_content)
			delete this->_content;
		this->_size = other._size;
		this->_content = new T[this->_size];
		for (unsigned int i = 0; i < this->_size; i++)
			this->_content[i] = other._content[i];
	}
	return (*this);
}

template <typename T>
T&	Array<T>::operator[]( unsigned int index )
{
	if (index < 0 || index >= (unsigned int)this->_size)
		throw std::out_of_range("Index out of range");
	else
		return (this->_content[index]);
}

template <typename T>
const T&	Array<T>::operator[]( unsigned int index ) const
{
	if (index < 0 || index >= (unsigned int)this->_size)
		throw std::out_of_range("Index out of range");
	else
		return (this->_content[index]);
}


// constructor and destructor

template <typename T>
Array<T>::Array( unsigned int size ) : _size(size)
{
	if (size == 0)
		this->_content = NULL ;
	else
		this->_content = new T[size];
}

template <typename T>
Array<T>::Array(Array<T>& other)
{
	if (!this->_content)
		delete this->_content;
	this->_size = other._size;
	this->_content = new T[this->_size];
	for (unsigned int i = 0; i < this->_size; i++)
		this->_content[i] = other._content[i];
}

template <typename T>
Array<T>::Array(const Array<T>& other)
{
	if (!this->_content)
		delete this->_content;
	this->_size = other._size;
	this->_content = new T[this->_size];
	for (unsigned int i = 0; i < this->_size; i++)
		this->_content[i] = other._content[i];
}

template <typename T>
Array<T>::~Array( )
{
	std::cout << "qwe\n";
	if (this->_content)
		delete this->_content;
}
