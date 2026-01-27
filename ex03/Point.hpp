/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoulin <fmoulin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 12:05:05 by fmoulin           #+#    #+#             */
/*   Updated: 2026/01/27 17:49:03 by fmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
private:
	const Fixed	_x;
	const Fixed	_y;
	Point &operator =(const Point &src);
public:
	Point();
	Point(const float a, const float b);
	Point(const Point &copy);
	~Point();

	const Fixed	&getRawX(void) const;
	const Fixed	&getRawY(void) const;

};

Fixed	orientedAera(Point const first, Point const second, Point const point);
bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif