/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 17:50:02 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/07/10 20:32:39 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form{

	protected:
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
		Form(Form &fr);
		Form& operator=(Form &fr);
		~Form();
		
		virtual void action()const = 0;
		virtual void execute(Bureaucrat const &executor) const = 0;
		Form& beSigned(Bureaucrat &br);

		std::string getName() const;
		bool getSign() const;
		int getGrade() const;
		
		void setName(std::string name);
		void setSign(bool sign);
		void setGrade(int grade);
	
		
};
std::ostream& operator<<(std::ostream& cout, Form &fr);
