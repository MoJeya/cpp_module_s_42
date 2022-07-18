/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 18:34:01 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/07/18 18:57:23 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template<typename t>
class Array{
	
	private:
		t ar[];
	
	Array();
	Array(size_t len);
	Array(Array &a);
	Array& operator=(Array& a);

	class OutOfBound : public std::exception {
		const char * what () const throw () {
			return "\033[31m Array out of Bound\033[0m";
		}
	};
}