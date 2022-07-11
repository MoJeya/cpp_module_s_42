/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 21:12:27 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/07/11 14:30:31 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Bureaucrat.hpp"
#include "inc/Form.hpp"
#include "inc/RobotomyRequestForm.hpp"
#include "inc/PresidentialPardonForm.hpp"
#include "inc/ShrubberyCreationForm.hpp"
#include "inc/Intern.hpp"
#include <string>

int main (void)
{

	try{
		Bureaucrat *br = new Bureaucrat("Bob", 40); //im constructor wird schon der fehler geworfen und im catch wird er ausgegeben
		std::cout << *br << std::endl;
		Intern someRandomeIntern;
		Form*	rrf;
		
		rrf = someRandomeIntern.makeForm("Robotomy Request Form", "Bender");
		br->signForm(*(rrf));
		delete br;
	}catch(std::exception & e){
		std::cout << e.what() << std::endl;
	}
	return 0;
	
}