/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 13:02:44 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/07/19 16:32:15 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Intern.hpp"

Intern::Intern(){}

Intern::~Intern(){}

Form* Intern::makeForm(std::string name, std::string target)
{
	std::string ar[] = {"Presidential Pardon Form","Robotomy Request Form","Shrubbery Creation Form"};
	int i = 0;
	for(i = 0; i < 3; i++)
	{
		if (ar[i] == name)
			break;
	}
	
	switch(i)
	{
		case 0:
			return (new PresidentialPardonForm(target));
			break;
		case 1:
			return (new RobotomyRequestForm(target));
			break;
		case 2:
			return (new ShrubberyCreationForm(target));
			break;
		default:
			throw Intern::NoForm();
	}
	// if (name == "Presidential Pardon Form")
	// {
	// 	std::cout << "Persidential Pardon Form has been created" << std::endl;
	// 	return (new PresidentialPardonForm(target));
	// }
	// else if (name == "Robotomy Request Form")
	// {
	// 	std::cout << "Robotomy Request Form has been created" << std::endl;
	// 	return (new RobotomyRequestForm(target));
	// }
	// else if (name == "Shrubbery Creation Form")
	// {
	// 	std::cout << "Shrubbery Creation Form has been created" << std::endl;
	// 	return (new ShrubberyCreationForm(target));
	// }
	// else
	// 	throw Intern::NoForm();
}
