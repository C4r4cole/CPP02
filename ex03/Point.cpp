/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoulin <fmoulin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 12:05:01 by fmoulin           #+#    #+#             */
/*   Updated: 2026/01/27 17:58:15 by fmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0)
{
	// std::cout << "Point default constructor called" << std::endl;
}

Point::Point(const float a, const float b) : _x(a), _y(b)
{
}

Point::Point(const Point &copy) : _x(copy._x), _y(copy._y)
{
	// std::cout << "Point copy constructor called" << std::endl;
}

Point::~Point()
{
}

const Fixed	&Point::getRawX(void) const
{
	return (this->_x);
}

const Fixed	&Point::getRawY(void) const
{
	return (this->_y);
}

