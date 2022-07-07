/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 21:12:27 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/07/08 00:14:40 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main (void)
{
	std::string name = "Bob";
	std::string &nameRef = name;
	try{
		Bureaucrat *br = new Bureaucrat(nameRef, 1); //im constructor wird schon der fehler geworfen und im catch wird er ausgegeben
		//*wenn erfolgreich dann wird alles ab zeile 22 ausgeführt
		br->setGrade(100);
		std::cout << "test" << std::endl;
		std::cout << *br << std::endl;
	}catch(std::exception & e){
		std::cout << e.what() << std::endl;
	}

	return 0;
	
}