/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoulin <fmoulin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 12:44:21 by fmoulin           #+#    #+#             */
/*   Updated: 2026/01/22 16:32:23 by fmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <string>
# include <iostream>
# include <cstdlib>
# include <cmath>

class Fixed
{
	private:
		int	_FixedPoint;
		static const int _FractionalBits;
	public:
		Fixed();
		Fixed(const Fixed &copy);
		Fixed(const int value);
		Fixed(const float value);
		~Fixed();
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
		
		Fixed &operator =(const Fixed &src);
		
		bool operator >(const Fixed &src) const;
		bool operator <(const Fixed &src) const;
		bool operator >=(const Fixed &src) const;
		bool operator <=(const Fixed &src) const;
		bool operator ==(const Fixed &src) const;
		bool operator !=(const Fixed &src) const;
		
		Fixed operator +(const Fixed &src) const;
		Fixed operator -(const Fixed &src) const;
		Fixed operator *(const Fixed &src) const;
		Fixed operator /(const Fixed &src) const;
		
		Fixed &operator ++();
		Fixed operator ++(int);
		Fixed &operator --();
		Fixed operator --(int);

		static Fixed &min(Fixed &value1, Fixed &value2);
		static Fixed &min(const Fixed &value1, const Fixed &value2);
		static Fixed &max(Fixed &value1, Fixed &value2);
		static Fixed &max(const Fixed &value1, const Fixed &value2);
};

std::ostream&	operator <<(std::ostream&, const Fixed&);

#endif

/*
🔹 Une référence = un autre nom pour un objet existant

🔹 Un temporaire n’est pas un objet

🔹 On ne peut jamais retourner une référence vers un temporaire

🔹 Les comparaisons retournent des valeurs → bool

🔹 Les min/max retournent des références → objets existants
*/