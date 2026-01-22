/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoulin <fmoulin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 12:44:25 by fmoulin           #+#    #+#             */
/*   Updated: 2026/01/22 14:06:58 by fmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const Fixed::_FractionalBits = 8;

Fixed::Fixed() : _FixedPoint(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	*this = copy;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(const int value) : _FixedPoint(value << _FractionalBits)
{
	// decale de 8 bits vers la gauche (reviens au meme que de multiplier par 256)
	// exemple avec 1 :
	// 1 en binaire = 00000001 (ou 2 puissance 1)
	// 256 en binaire = 100000000 (ou 2 puissance 8)
	// donc en effet, si on decale le premier bit de 8 rang vers la gauche c'est comme si on multipliait par 256
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value) : _FixedPoint(roundf(value * (1 << _FractionalBits)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed &Fixed::operator =(const Fixed &src)
{
	if (this != &src)
		this->_FixedPoint = src.getRawBits();
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits(void) const
{
	return (this->_FixedPoint);
}

void		Fixed::setRawBits(int const raw)
{
	this->_FixedPoint = raw;
}

float	Fixed::toFloat(void) const
{
	float	res;
	
	res = this->_FixedPoint;
	res = res / (1 << _FractionalBits);
	return (res);
}

int		Fixed::toInt(void) const
{
	int	res;

	res = this->_FixedPoint >> _FractionalBits;
	return (res);
}

std::ostream&	operator <<(std::ostream& os, const Fixed& fixed)
{
	os << fixed.toFloat();
	
	return (os);
}
