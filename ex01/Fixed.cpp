/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 00:39:48 by juligonz          #+#    #+#             */
/*   Updated: 2021/01/27 22:33:49 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <ostream>
#include <string>
#include <cmath>

int const Fixed::_sizeFractionalBits = 8;
int const Fixed::_fractionalMask = (1 << Fixed::getSizeFractionalBits())-1;

Fixed::Fixed(): _value(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const &value){
	std::cout << "Int constructor called  (value:"
		<< value << ")" << std::endl;
	_value = value << _sizeFractionalBits;	
}

Fixed::Fixed(float const &value){
	std::cout << "Float constructor called  (value:"
		<< value << ")" << std::endl;
	_value = roundf(value * (1<<_sizeFractionalBits));	
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

int	Fixed::getSizeFractionalBits(void){
	return _sizeFractionalBits;
}
int	Fixed::getFractionalMask(void){
	return _fractionalMask;
}

std::ostream& operator <<(std::ostream& os, Fixed const &f){
	if (f.getRawBits() & Fixed::getFractionalMask())
		os << f.toFloat();
	else
		os << f.toInt();
	return os;
}

int	Fixed::getRawBits(void) const{
	return _value;	
}

void Fixed::setRawBits(int const raw){
	_value = raw;	
}

float	Fixed::toFloat() const{
	return (float)_value / (float)(1 << _sizeFractionalBits);
}

int		Fixed::toInt() const{
	return _value >> _sizeFractionalBits;
}
