/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 15:18:58 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/07/11 12:06:19 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
{
	this->_target = target;
	this->_grade = 137;
	this->_name = "Shrubbery Creation Form";
	this->_sign = false;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm& sb)
{
	*this = sb;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm& sb)
{
	if (this != &sb)
	{
		this->_target = sb._target;
	}
	return *this;
}

void ShrubberyCreationForm::action() const
{
	std::ofstream file(this->_target + "_shrubbery", std::ios::trunc);
	if (!file.is_open())
	{
		std::cout << "File unable to open" << std::endl;
	}
	else
	{
		file <<"*" << '\n'
		<< "**" << '\n'
		<< "***" << '\n'
		<< "****" << '\n'
		<< "*****" << '\n'
		<< " || ";
		file.close();
	}
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor)const
{
	std::cout << executor.getGrade() << " Form: " << this->getGrade() << std::endl;
	if (executor.getGrade() > this->getGrade())
		throw Form::GradeToLow();
	else
		this->action();
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	
}