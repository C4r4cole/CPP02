/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoulin <fmoulin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 12:44:25 by fmoulin           #+#    #+#             */
/*   Updated: 2026/01/21 18:50:12 by fmoulin          ###   ########.fr       */
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

Fixed::Fixed(const int value)
{
	this->_FixedPoint = value << 8; // decale de 8 bits vers la gauche (reviens au meme que de multiplier par 256)
}

Fixed::Fixed(const float value)
{
	this->_FixedPoint = roundf(value * 256);
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
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_FixedPoint);
}

void		Fixed::setRawBits(int const raw)
{
	this->_FixedPoint = raw;
}