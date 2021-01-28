/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 00:39:48 by juligonz          #+#    #+#             */
/*   Updated: 2021/01/28 01:04:40 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <ostream>
#include <string>
#include <cmath>

int const Fixed::_sizeFractionalBits = 8;
int const Fixed::_fractionalMask = (1 << Fixed::getSizeFractionalBits())-1;

Fixed::Fixed(int const &value): _value(value << _sizeFractionalBits){}
Fixed::Fixed(float const &value): _value(roundf(value * (1<<_sizeFractionalBits))){}
Fixed::Fixed(Fixed const &other): _value(other._value){}

Fixed::~Fixed(){}


int	Fixed::getSizeFractionalBits(void) {return _sizeFractionalBits;}
int	Fixed::getFractionalMask(void) {return _fractionalMask;}


int	 Fixed::getRawBits(void) const{return _value;}
void Fixed::setRawBits(int const raw){
	_value = raw;	
}

float	Fixed::toFloat() const{
	return (float)_value / (float)(1 << _sizeFractionalBits);
}
int		Fixed::toInt() const{
	return _value >> _sizeFractionalBits;
}

Fixed& Fixed::operator=(Fixed const &other){
	_value = other._value;
	return *this;
}

bool Fixed::operator==(Fixed const &other){
	 return _value == other._value;
}

bool Fixed::operator!=(Fixed const &other){
	return _value != other._value;
}

// Fixed& Fixed::operator>(Fixed const &);
// Fixed& Fixed::operator<(Fixed const &);
// Fixed& Fixed::operator>=(Fixed const &);
// Fixed& Fixed::operator<=(Fixed const &);

Fixed Fixed::operator+(Fixed const &other){
	Fixed result;
	
	result._value = _value + other._value;
	return result;
}
// Fixed Fixed::operator-(Fixed const &);
Fixed Fixed::operator*(Fixed const &other){
	Fixed result;

	result._value = _value * other._value >> _sizeFractionalBits;
	return result;
}
// Fixed Fixed::operator/(Fixed const &other){
// 	Fixed result;

// 	result._value = _value / other._value << _sizeFractionalBits;
// 	return result;	
// }

Fixed& Fixed::operator++(){
	_value++;
	return *this;
}
Fixed  Fixed::operator++(int){
	Fixed result = *this;
	
	result._value++;
	return result;
}
// Fixed& operator--(); 	//prefix decrement
// Fixed  operator--(int); //postfix decrement

// Fixed& min(Fixed const &left, Fixed const &right);
Fixed& max(Fixed &left, Fixed &right){
	if (left.getRawBits() > right.getRawBits())
		return left;
	return right;
}
// Fixed& const Fixed::max(Fixed const &left, Fixed const &right){
// 	if (left.getRawBits() > right.getRawBits())
// 		return left;
// 	return right;
// }

std::ostream& operator <<(std::ostream& os, Fixed const &f)
{
	if (f.getRawBits() & Fixed::getFractionalMask())
		os << f.toFloat();
	else
		os << f.toInt();
	return os;
}


