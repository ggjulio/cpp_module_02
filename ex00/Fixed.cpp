/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 00:39:48 by juligonz          #+#    #+#             */
/*   Updated: 2021/01/26 23:37:57 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

const int Fixed::_nbBits = 8;

Fixed::Fixed(int const &value): _value(value){
	std::cout << "Default constructor called  (value:"
		<< value << ")" << std::endl;
}

Fixed::Fixed(Fixed const &other){
	std::cout << "Copy constructor called  (value:"	
		<< other._value << ")" << std::endl;
	*this = other;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl; 
}

Fixed& Fixed::operator=(Fixed const &other){
	std::cout << "Assignation operator called  (value:"
		<< other._value << ")" << std::endl;
	_value = other.getRawBits();
	return *this;
}

int	Fixed::getRawBits(void) const{
	std::cout << "getRawBits member function called" << std::endl; 
	return _value;	
}

void Fixed::setRawBits(int const raw){
	std::cout << "setRawBits member function called" << std::endl; 
	_value = raw;	
}
