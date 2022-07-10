/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 17:50:02 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/07/10 13:43:39 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form{

	private:
		std::string _name;
		bool 		_sign;
		int 		_grade;
		
	public:

		class GradeToHigh : public std::exception {
			const char * what() const throw () {
				return "\033[31mGrade of Bureaucrat is to High\033[0m";
			}
		};
		
		class GradeToLow : public std::exception {
			const char * what() const throw () {
				return "\033[31mGrade of Bureaucrat is to low for\033[0m";
			}
		};
		
		Form();
		Form(const std::string &name, Bureaucrat &br, int grade);
		
		Form(Form &fr);
		Form& operator=(Form &fr);
		~Form();
		
		Form& beSigned(Bureaucrat &br);

		std::string getName() const;
		bool getSign() const;
		int getGrade() const;
		
		void setName(std::string name);
		void setSign(bool sign);
		void setGrade(int grade);
	
		
};
std::ostream& operator<<(std::ostream& cout, Form &fr);
