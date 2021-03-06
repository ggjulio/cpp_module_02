/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 00:39:51 by juligonz          #+#    #+#             */
/*   Updated: 2021/01/27 18:20:41 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

class Fixed
{
private:
	int _value;
	int static const _sizeFractionalBits;

public:
	Fixed(int const &value=0);
	Fixed(Fixed const &other);
	~Fixed();

	Fixed& operator=(Fixed const &);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

};

#endif
