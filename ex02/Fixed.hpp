/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 00:39:51 by juligonz          #+#    #+#             */
/*   Updated: 2021/01/29 00:27:01 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <ostream>

class Fixed
{
private:
	int _value;
	int static const _sizeFractionalBits;
	int static const _fractionalMask;

public:
	Fixed(int const &value=0);
	Fixed(float const &value);
	Fixed(Fixed const &other);
	
	~Fixed();

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

	float	toFloat() const;
	int		toInt() const;

	int static getSizeFractionalBits(void);
	int static getFractionalMask(void);
	
	Fixed& operator=(Fixed const &);
	
	bool operator==(Fixed const &);
	bool operator!=(Fixed const &);
	bool operator>(Fixed const &);
	bool operator<(Fixed const &);
	bool operator>=(Fixed const &);
	bool operator<=(Fixed const &);
	
	Fixed operator+(Fixed const &);
	Fixed operator-(Fixed const &);
	Fixed operator*(Fixed const &);
	Fixed operator/(Fixed const &);

	Fixed& operator++();	//prefix increment
	Fixed  operator++(int); //postfix increment
	Fixed& operator--(); 	//prefix decrement
	Fixed  operator--(int); //postfix decrement

	static Fixed		&min(Fixed &left, Fixed &right);
	static Fixed const	&min(Fixed const &left, Fixed const &right);
	static Fixed		&max(Fixed &left, Fixed &right);
	static Fixed const	&max(Fixed const &left, Fixed const &right);

};

std::ostream& operator <<(std::ostream& os, Fixed const &f);

#endif
