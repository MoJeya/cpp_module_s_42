/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 13:48:54 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/06/22 14:51:58 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Fixed {
	private:
		int               _fixValue;
		static const int _fracBits = 8;
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &cpyFixed);
		Fixed& operator=(const Fixed &fx);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

