/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 15:02:59 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/07/10 20:38:19 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "../inc/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target)
{
	this->_target = target;
	this->_grade = 45;
	this->_name = "Robotomy Request Form";
	this->_sign = false;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &rb)
{
	*this = rb;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm &rb)
{
	if (this != &rb)
	{
		this->_target = rb._target;
	}
	return *this;
}

void RobotomyRequestForm::action() const
{
	std::cout << "* Drill Nois *" << std::endl;
	int random = 1 + (rand() % 10);
	if((random/ 2) % 2 == 0)
		std::cout << this->_target << " has been robotomized" << std::endl;
	else
		std::cout << "robotomy has failed" << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > this->getGrade())
		throw Form::GradeToLow();
	else
		this->action();
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	
}