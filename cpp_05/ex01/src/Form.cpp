/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 22:21:25 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/07/08 23:17:30 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Form.hpp"
#include "../inc/Bureaucrat.hpp"

Form::Form(){}

Form::Form(std::string &name, int grade, bool sign) : _name(name)
{
	if (grade < 1)
		throw Form::GradeToLow();
	else if (grade > 150)
		throw Form::GradeToHigh();
	else
	{
		this->_grade = grade;
		this->_sign = sign;	
	}
}

Form::Form(Form &fr)
{
	*this = fr;
}

Form& Form::operator=(Form &fr)
{
	if (this != &fr)
	{
		this->_name = fr._name;
		this->_grade = fr._grade;
		this->_sign = fr._sign;
	}
	return *this;
}

Form::~Form()
{
	std::cout << "\033[31mForm\033[0m: Deconsturctet" << std::endl;
}

Form& Form::beSigned(Bureaucrat &br)
{
	if (br.getGrade() > 50)
		throw Form::GradeToLow();
	else
		this->_sign = true;
	return *this;
}

std::string Form::getName() const
{
	return this->_name;
}

bool Form::getSign() const
{
	return this->_sign;
}

int Form::getGrade() const
{
	return this->_grade;
}

void Form::setName(std::string name)
{
	this->_name = name;
}

void Form::setSign(bool sign)
{
	this->_sign = sign;	
}

void Form::setGrade(int grade)
{
	if (grade < 1)
		throw Form::GradeToLow();
	else if (grade > 150)
		throw Form::GradeToHigh();
	else
		this->_grade = grade;
}

std::ostream* operator<<(std::ostream& cout, Form &fr)
{
	std::cout << "Name: " << fr.getName() << " Grade: " << fr.getGrade() << " sign: " << fr.getSign();
	return (cout);
}