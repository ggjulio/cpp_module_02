/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 00:39:51 by juligonz          #+#    #+#             */
/*   Updated: 2021/01/27 00:42:03 by juligonz         ###   ########.fr       */
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
	int static const _nbBits;

public:
	Fixed(int const &value=0);
	Fixed(float const &value);
	Fixed(Fixed const &other);
	
	~Fixed();

	Fixed& operator=(Fixed const &);
    // std::ostream operator<<(int y);

	
	int		getRawBits(void) const;
	void	setRawBits(int const raw);

	float	toFloat() const;
	int		toInt() const;

	

};

#endif
