/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoulin <fmoulin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 15:02:06 by fmoulin           #+#    #+#             */
/*   Updated: 2026/01/27 18:09:06 by fmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main(void)
{
	Point	a(0, 0);
	Point	b(0, 10);
	Point	c(10, 0);
	Point	p(4, 4);
	bool	res;
	
	res = bsp(a, b, c, p);
	if (res == true)
		std::cout << "Le point est a l'interieur du triangle" << std::endl;
	else
		std::cout << "Le point est a l'exterieur du triangle" << std::endl;

	return (0);
}
