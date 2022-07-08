/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   From.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 17:50:02 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/07/08 17:57:00 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Form{

	private:
		const std::string name;
		bool sign;
		const int grade;
	public:

		class GradeToHigh : public std::exception {
			const char * waht() const throw () {
				return "\033[31mGrade can't be bigger than 150\033[0m";
			}
		}
		
		class GradeToLow : public std::exception {
			const char * what() const throw () {
				return 	return "\033[31mGrade can't be lower than 1\033[0m";
			}
		}
	//TODO: write getters
	
		
};
//TODO: overload insertion