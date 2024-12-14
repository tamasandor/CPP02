/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 10:51:25 by atamas            #+#    #+#             */
/*   Updated: 2024/12/15 00:30:23 by atamas           ###   ########.fr       */
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
	bool operator> (const Fixed &other) const;
	bool operator< (const Fixed &other) const;
	bool operator>= (const Fixed &other) const;
	bool operator<= (const Fixed &other) const;
	bool operator== (const Fixed &other) const;
	bool operator!= (const Fixed &other) const;
	Fixed operator+ (const Fixed &other) const;
	Fixed operator- (const Fixed &other) const;
	Fixed operator* (const Fixed &other) const;
	Fixed operator/ (const Fixed &other) const;
	Fixed &operator++ (void);
	/* If the overloaded operator has an int parameter, the operator is a postfix overload. */
	Fixed operator++ (int);
	Fixed &operator-- (void);
	/* If the overloaded operator has an int parameter, the operator is a postfix overload. */
	Fixed operator-- (int);
	// Fixed &operator min (const Fixed &other);
	static Fixed &min (Fixed &a, Fixed &b);
	static const Fixed &min (const Fixed &a, const Fixed &b);
	static Fixed &max (Fixed &a, Fixed &b);
	static const Fixed &max (const Fixed &a, const Fixed &b);
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