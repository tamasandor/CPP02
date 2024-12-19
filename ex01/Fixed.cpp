/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 10:51:28 by atamas            #+#    #+#             */
/*   Updated: 2024/12/19 16:51:12 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

const int Fixed::m_bits = 8;

Fixed::Fixed()
{
	m_fixedPoint = 0;
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const int integer)
{
	m_fixedPoint = (integer << m_bits);
	std::cout << "Int constructor called\n";
}

Fixed::Fixed(const float floatpointint)
{
	m_fixedPoint = (int)roundf((floatpointint * (int)(1 << m_bits)));
	std::cout << "Float constructor called\n";
	
}

Fixed::Fixed(const Fixed &fixed)
{
	if (this != &fixed)
		*this= fixed;
	std::cout << "Copy constructor called\n";
}

Fixed &Fixed::operator= (const Fixed &fixed)
{
	std::cout << "Copy assignment operator called\n";
	if (this != &fixed)
		this->m_fixedPoint = fixed.m_fixedPoint;
	return (*this);
}

std::ostream &operator<< (std::ostream & stream, const Fixed &fixed)
{
	// std::cout << "Insertion operator called\n";
	stream << fixed.toFloat();
	return (stream);
}

Fixed::~Fixed()
{
	std::cout << "Deconstructor called\n";
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return (m_fixedPoint);
}

float	Fixed::toFloat(void) const
{
	return ((float)m_fixedPoint / (1 << m_bits));
}

int		Fixed::toInt(void) const
{
	return (m_fixedPoint >> m_bits);
}

void	Fixed::setRawBits(int const raw)
{
	m_fixedPoint = raw;
	std::cout << "setRawBits member function called\n";
}
