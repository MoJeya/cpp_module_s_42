/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 17:03:50 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/07/08 00:14:55 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Bureaucrat{

	protected:
		std::string			_name;
		int 				_grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string &name, int grade);
		Bureaucrat(Bureaucrat &br);
		
		Bureaucrat& operator=(Bureaucrat &br);
		
		~Bureaucrat();

		
		void setName(std::string &name);
		void setGrade(int grade);
		std::string getName() const;
		int getGrade() const;

		class GradeToHigh : public std::exception {
			   const char * what () const throw () {
				return "\033[31mGrade can't be bigger than 150\033[0m";
		   	}
		};

		class GradeToLow : public std::exception {
			const char * what () const throw () {
				return "\033[31mGrade can't be lower than 1\033[0m";
			}
		};

		Bureaucrat& operator++(int);
		Bureaucrat& operator--(int);

};
std::ostream& operator<<(std::ostream& cout, Bureaucrat &br);
