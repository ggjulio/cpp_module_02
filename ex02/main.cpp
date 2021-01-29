/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 23:32:45 by juligonz          #+#    #+#             */
/*   Updated: 2021/01/29 00:53:18 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ostream>
#include <string>
#include "Fixed.hpp"

int main(void) {
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	
	std::cout <<"############### Min test:"<< std::endl;
	std::cout << Fixed::min( a, b ) << std::endl;
	std::cout << Fixed::min( a, a ) << std::endl;
	std::cout << Fixed::min( b, b ) << std::endl;
	
	
	std::cout <<"############### decrement test:"<< std::endl;
	std::cout << a << std::endl;
	std::cout << --a << std::endl;
	std::cout << a << std::endl;
	std::cout << a-- << std::endl;
	std::cout << a << std::endl;

	std::cout <<"############### div test:"<< std::endl;
		std::cout << Fixed(10.10f) / Fixed(2.f) << std::endl;
		std::cout << Fixed(0.5f) / Fixed(2.f) << std::endl;
		
	std::cout <<"############### + test:"<< std::endl;
		std::cout << Fixed(Fixed(0.5f) + Fixed(2.f)) << std::endl;
	
	std::cout <<"############### - test:"<< std::endl;
		std::cout << Fixed(Fixed(0.5f) - Fixed(2.f)) << std::endl;
	
	std::cout <<"############### equality test :"<< std::endl;
		if (Fixed(5.5f) == Fixed(5.5f))  std::cout << "ok" << std::endl;
		if (Fixed(5.5f) == Fixed(5.25f)) std::cout << "ko" << std::endl;
	
	std::cout <<"############### non equality test :"<< std::endl;
		if (Fixed(5.5f) != Fixed(5.5f))  std::cout << "ko" << std::endl;
		if (Fixed(5.5f) != Fixed(5.25f)) std::cout << "ok" << std::endl;
		if (Fixed(-5.5f) != Fixed(5.5f)) std::cout << "ok" << std::endl;
		if (Fixed(5.5f) != Fixed(5.25f)) std::cout << "ok" << std::endl;
	
	std::cout <<"############### <= test :"<< std::endl;
		if (Fixed(5.5f) <= Fixed(5.5f))	std::cout << "ok" << std::endl;
		if (Fixed(5.4f) <= Fixed(5.5f))	std::cout << "ok" << std::endl;
		if (Fixed(5.6f) <= Fixed(5.5f))	std::cout << "ko" << std::endl;
	
	std::cout <<"############### >= test :"<< std::endl;
		if (Fixed(5.5f) >= Fixed(5.5f)) std::cout << "ok" << std::endl;
		if (Fixed(5.4f) >= Fixed(5.5f)) std::cout << "ko" << std::endl;
		if (Fixed(5.6f) >= Fixed(5.5f)) std::cout << "ok" << std::endl;
	
	std::cout <<"############### > test :"<< std::endl;
		if (Fixed(5.5f) > Fixed(5.5f)) std::cout << "ko" << std::endl;
		if (Fixed(5.6f) > Fixed(5.5f)) std::cout << "ok" << std::endl;
	
	std::cout <<"############### < test :"<< std::endl;
		if (Fixed(5.5f) < Fixed(5.5f)) std::cout << "ko" << std::endl;
		if (Fixed(5.4f) < Fixed(5.5f)) std::cout << "ok" << std::endl;
	
	return 0;
}