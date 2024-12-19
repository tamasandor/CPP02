/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 10:51:25 by atamas            #+#    #+#             */
/*   Updated: 2024/12/19 16:51:28 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef FIXED
#define FIXED

class Fixed
{
private:
	int					m_fixedPoint;
	static const int	m_bits;
public:
	Fixed();
	Fixed(const Fixed &fixed);
	Fixed& operator= (const Fixed &fixed);
	~Fixed();
	int	getRawBits( void )const;
	void	setRawBits(int const raw);
};


#endif