/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 10:51:28 by atamas            #+#    #+#             */
/*   Updated: 2024/12/03 21:56:35 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	m_fixedPoint = 0;
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const int integer)
{
	std::cout << "Int constructor called\n";
	(void)integer;
}

Fixed::Fixed(const float floatpointint)
{
	std::cout << "Float constructor called\n";
	(void)floatpointint;
}

Fixed::Fixed(const Fixed &fixed)
{
	m_fixedPoint = fixed.getRawBits();
	std::cout << "Copy constructor called\n";
}

Fixed &Fixed::operator= (const Fixed &fixed)
{
	std::cout << "Copy assignment operator called\n";
	if (this != &fixed)
		this->m_fixedPoint = getRawBits();
	return (*this);
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

void	Fixed::setRawBits(int const raw)
{
	m_fixedPoint = raw;
	std::cout << "setRawBits member function called\n";
}