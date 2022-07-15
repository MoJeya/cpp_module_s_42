/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 12:45:17 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/07/15 12:46:24 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <iomanip>

class Conversion{

	private:
		std::string _type;
	public:
		Conversion();
		Conversion(std::string _type);
		Conversion(Conversion &c);
		
		int ConvertToInt();
		float ConvertToFloat();
		double ConvertToDouble();
		char ConvertToChar();
		std::string getType();
		Conversion& operator=(Conversion &c);
		~Conversion();

		class NonDisplayble : public std::exception {
			const char * what () const throw () {
				return "NonDisplayble";
			}
		};

		class Impossible : public std::exception {
			const char * what () const throw () {
				return "Impossible";
			}
		};
};
std::ostream& operator<<(std::ostream& cout, Conversion& c);
//  throw std::invalid_argument("AddPositiveIntegers arguments must be positive");
bool isFloatNumber(std::string type);
bool isDoubleNumber(std::string type);
bool isCharSing(std::string type);