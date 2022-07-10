/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 14:48:52 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/07/10 20:23:24 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target)
{
	this->_target = target;
	this->_grade = 5;
	this->_name = "Presidential Pardon Form";
	this->_sign = false;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &pr)
{
	*this = pr;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm &pr)
{
	if (this != &pr)
	{
		this->_target = pr._target;
	}
	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > this->getGrade())
		throw Form::GradeToLow();
	else
		action();
}

void PresidentialPardonForm::action() const
{
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{

}