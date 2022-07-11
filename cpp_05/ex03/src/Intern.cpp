/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 13:02:44 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/07/11 14:28:39 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Intern.hpp"

Intern::Intern(){}

Intern::~Intern(){}

Form* Intern::makeForm(std::string name, std::string target)
{
	if (name == "Presidential Pardon Form")
	{
		std::cout << "Persidential Pardon Form has been created" << std::endl;
		return (new PresidentialPardonForm(target));
	}
	else if (name == "Robotomy Request Form")
	{
		std::cout << "Robotomy Request Form has been created" << std::endl;
		return (new RobotomyRequestForm(target));
	}
	else if (name == "Shrubbery Creation Form")
	{
		std::cout << "Shrubbery Creation Form has been created" << std::endl;
		return (new ShrubberyCreationForm(target));
	}
	else
		throw Intern::NoForm();
}
