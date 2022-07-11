/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 21:12:27 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/07/11 16:26:23 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main (void)
{
	
	try{
		Bureaucrat *br = new Bureaucrat("Bob", 1); //im constructor wird schon der fehler geworfen und im catch wird er ausgegeben
		//*wenn erfolgreich dann wird alles ab zeile 22 ausgeführt
		std::cout << *br << std::endl;
		br->setGrade(100);
		std::cout << *br << std::endl;
		br->operator--();
		std::cout << *br << std::endl;
		delete br;
		//////////////////////////////////////////////////////////////////////
		//*							WRONG GRADE 							//
		//////////////////////////////////////////////////////////////////////
		// Bureaucrat *br3 = new Bureaucrat("silla", 151); //im constructor wird schon der fehler geworfen und im catch wird er ausgegeben
		// std::cout << *br3 << std::endl;
		// delete br3;
		//////////////////////////////////////////////////////////////////////
		//*						Error: Incrementation 						//
		//////////////////////////////////////////////////////////////////////
		// Bureaucrat *br2 = new Bureaucrat("Chunkz", 150);
		// std::cout << *br2 << std::endl; 
		// std::cout << *br2 << std::endl;
		// br2->operator++();
		// delete br2;
	}catch(std::exception & e){
		std::cout << e.what() << std::endl;
	}

	return 0;
	
}