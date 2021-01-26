/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 00:39:48 by juligonz          #+#    #+#             */
/*   Updated: 2021/01/27 00:44:57 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <ostream>
#include <string>

const int Fixed::_nbBits = 8;

Fixed::Fixed(int const &value){
	_value = value;	
}

Fixed::Fixed(float const &value){
	_value = value;	
}

Fixed::Fixed(Fixed const &other){
	*this = other;
}
Fixed::~Fixed(){}

Fixed& Fixed::operator=(Fixed const &other){
	_value = other.getRawBits();
	return *this;
}

std::ostream& operator <<(std::ostream& out, Fixed const &f){
	return out << f.getRawBits();
}

int	Fixed::getRawBits(void) const{
	return _value;	
}

void Fixed::setRawBits(int const raw){
	_value = raw;	
}

float	Fixed::toFloat() const{
	return -1;
}
int		Fixed::toInt() const{
	return -1;
}
