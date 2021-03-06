/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 18:15:36 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/07/11 16:04:13 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "Standart constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name) 
{
	if (grade < 1)
		throw Bureaucrat::GradeToLow();
	else if (grade > 150)
		throw Bureaucrat::GradeToHigh();
	else
		this->_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat &br)
{
	*this = br;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat &br)
{
	if (this != &br)
	{
		this->_name = br.getName();
		this->_grade = br._grade;
	}
	return *this;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Deconstructor was called!" << std::endl;
}

void Bureaucrat::setName(std::string &name)
{
	this->_name = name;
}

void Bureaucrat::setGrade(int grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeToLow();
	else if (grade > 150)
		throw Bureaucrat::GradeToHigh();
	else
		this->_grade = grade;	
}

std::string Bureaucrat::getName() const
{
	return (this->_name);
}

int Bureaucrat::getGrade() const
{
	return (this->_grade);
}

Bureaucrat& Bureaucrat::operator++(){
	if (this->getGrade() > 150)
		throw Bureaucrat::GradeToLow();
	if (this->getGrade() < 1)
		throw Bureaucrat::GradeToHigh();
	this->setGrade(this->getGrade()+1);
	return (*this);	
}

Bureaucrat Bureaucrat::operator++(int){
	Bureaucrat tmp = *this;
	++*this;
	if (this->getGrade() < 1)
		throw Bureaucrat::GradeToHigh();
	if (this->getGrade() > 150)
		throw Bureaucrat::GradeToLow();
	return (tmp);
}

Bureaucrat& Bureaucrat::operator--(){
	if (this->getGrade() < 1)
		throw Bureaucrat::GradeToHigh();
	if (this->getGrade() > 150)
		throw Bureaucrat::GradeToLow();
	this->setGrade(this->getGrade()-1);
	return (*this);
}

Bureaucrat Bureaucrat::operator--(int){
	Bureaucrat tmp = *this;
	--*this;
	if (this->getGrade() < 1)
		throw Bureaucrat::GradeToHigh();
	if (this->getGrade() > 150)
		throw Bureaucrat::GradeToLow();
	return (tmp);
}

std::ostream& operator<<(std::ostream& cout, Bureaucrat &br)
{
	cout << br.getName() << " Bureaucrat grade "<< br.getGrade();
	return (cout);
}