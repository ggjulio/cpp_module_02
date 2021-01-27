/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 00:39:51 by juligonz          #+#    #+#             */
/*   Updated: 2021/01/27 21:44:39 by juligonz         ###   ########.fr       */
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
	Fixed();
	Fixed(int const &value);
	Fixed(float const &value);
	Fixed(Fixed const &other);
	
	~Fixed();

	Fixed& operator=(Fixed const &);

	
	int		getRawBits(void) const;
	void	setRawBits(int const raw);

	float	toFloat() const;
	int		toInt() const;

	int static getSizeFractionalBits(void);
	int static getFractionalMask(void);
};

std::ostream& operator <<(std::ostream& out, Fixed const &f);

#endif
