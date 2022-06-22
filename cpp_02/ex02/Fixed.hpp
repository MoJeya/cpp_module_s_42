/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 13:48:54 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/06/22 18:46:26 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <cmath>

class Fixed {
	private:
		int					_fixValue;
		static const int	_fracBits = 8;
	public:
		Fixed();
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed &cpyFixed);
		Fixed& operator=(const Fixed &fx);
		
		Fixed& operator++(void);
		Fixed operator++(int);
		Fixed& operator--(void);
		Fixed operator--(int);
		
		bool operator>(const Fixed &fx);
		bool operator<(const Fixed &fx);
		bool operator>=(const Fixed &fx);
		bool operator<=(const Fixed &fx);
		bool operator==(const Fixed &fx);
		bool operator!=(const Fixed &fx);
		
		Fixed operator*(const Fixed &fx) const;
		Fixed operator-(const Fixed &fx) const;
		Fixed operator+(const Fixed &fx) const;
		Fixed operator/(const Fixed &fx) const;

		static Fixed& min(Fixed &fxOne, Fixed &fxTwo);
		static Fixed const &min(const Fixed &fxOne, const Fixed &fxTwo);
		static Fixed& max(Fixed &fxOne, Fixed &fxTwo);
		static Fixed const &max(const Fixed &fxOne, const Fixed &fxTwo);
		
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
		~Fixed();
		
};
std::ostream& operator<<(std::ostream& cout, const Fixed &fx);
