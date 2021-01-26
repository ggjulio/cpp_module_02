/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 00:39:51 by juligonz          #+#    #+#             */
/*   Updated: 2021/01/26 23:11:52 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

class Fixed
{
private:
	int _value;
	int static const _nbBits;

public:
	Fixed(int value=0);
	Fixed(const Fixed &other);
	~Fixed();

	void operator=(const Fixed &other);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

};

#endif