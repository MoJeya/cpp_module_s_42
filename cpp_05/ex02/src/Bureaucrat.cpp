/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 18:15:36 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/07/11 12:04:53 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"
#include "../inc/Form.hpp"

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

void Bureaucrat::signForm(Form& fr)
{
	try{
		fr.beSigned(*this);
		std::cout << this->getName() << " signed " << fr;
		this->executeForm(fr); // the execution of a from will be tryed right after the form is success fully signed.
	}catch(std::exception & e){
		std::cout << e.what() << std::endl;
		std::cout << this->getName() << " couldn’t sign " << fr;
	}
}

std::string Bureaucrat::getName() const
{
	return (this->_name);
}

int Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void Bureaucrat::executeForm(Form const & form)
{
	try{
		std::cout << this->getName() << " executes " << form.getName() << std::endl;
		form.execute(*this);
	}catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}

Bureaucrat& Bureaucrat::operator++(int){
	this->setGrade(this->getGrade()+1);
	return (*this);	
}

Bureaucrat& Bureaucrat::operator--(int){
	this->setGrade(this->getGrade()-1);
	return (*this);
}


std::ostream& operator<<(std::ostream& cout, Bureaucrat &br)
{
	cout << br.getName() << " Bureaucrat grade "<< br.getGrade()<< '\n';
	return (cout);
}