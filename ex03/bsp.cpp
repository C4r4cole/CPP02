/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoulin <fmoulin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 16:10:52 by fmoulin           #+#    #+#             */
/*   Updated: 2026/01/27 18:08:34 by fmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed	orientedAera(Point const first, Point const second, Point const point)
{
	Fixed	res;
	
	res = (second.getRawX() - first.getRawX()) * (point.getRawY() - first.getRawY()) - (second.getRawY() - first.getRawY()) * (point.getRawX() - first.getRawX());
	return (res);
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed res1;
	Fixed res2;
	Fixed res3;

	res1 = orientedAera(a, b, point);
	res2 = orientedAera(b, c, point);
	res3 = orientedAera(c, a, point);

	if ((res1 > 0 && res2 > 0 && res3 > 0) || (res1 < 0 && res2 < 0 && res3 < 0))
		return (true);
	else
		return (false);
}
