/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 21:12:27 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/07/10 20:55:36 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Bureaucrat.hpp"
#include "inc/Form.hpp"
#include "inc/RobotomyRequestForm.hpp"
#include "inc/PresidentialPardonForm.hpp"
#include "inc/ShrubberyCreationForm.hpp"
#include <string>

int main (void)
{

	try{
		Bureaucrat *br = new Bureaucrat("Bob", 40); //im constructor wird schon der fehler geworfen und im catch wird er ausgegeben
		std::cout << *br << std::endl;
		Form *fr = new RobotomyRequestForm("home");
		//*wenn erfolgreich dann wird alles ab zeile 22 ausgeführt
		br->signForm(*(fr));
		//////////////////////////////////////////////////////////////////////
		//*							WRONG GRADE 							//
		//////////////////////////////////////////////////////////////////////
		Bureaucrat *br2 = new Bureaucrat("Chunkz", 140);
		std::cout << *br2 << std::endl; 
		Form *fr2 = new ShrubberyCreationForm("home");
		br2->signForm(*(fr2));
	}catch(std::exception & e){
		std::cout << e.what() << std::endl;
	}

	return 0;
	
}