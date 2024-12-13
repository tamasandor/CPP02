/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 10:51:25 by atamas            #+#    #+#             */
/*   Updated: 2024/12/13 16:59:03 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef FIXED
#define FIXED

class Fixed
{
private:
	int					m_fixedPoint;
	static const int	m_bits = 8;
public:
	bool operator> (const Fixed &other);
	bool operator< (const Fixed &other);
	bool operator>= (const Fixed &other);
	bool operator<= (const Fixed &other);
	bool operator== (const Fixed &other);
	bool operator!= (const Fixed &other);
	Fixed operator+ (const Fixed &other);
	Fixed operator- (const Fixed &other);
	Fixed operator* (const Fixed &other);
	Fixed operator/ (const Fixed &other);
	Fixed &operator++ (void);
	Fixed operator++ (void);
	// Fixed &operator min (const Fixed &other);
	Fixed();
	Fixed(const int integer);
	Fixed(const float floatpointint);
	Fixed(const Fixed &fixed);
	Fixed& operator= (const Fixed &fixed);
	~Fixed();
	int		getRawBits( void )const;
	void	setRawBits(int const raw);
	float	toFloat(void)const;
	int		toInt(void)const;
};



std::ostream& operator<< (std::ostream &stream, const Fixed &fixed);

#endif