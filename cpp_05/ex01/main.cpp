/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 21:12:27 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/07/08 23:18:16 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Bureaucrat.hpp"
#include "inc/Form.hpp"

int main (void)
{
	
	try{
		Bureaucrat *br = new Bureaucrat("Bob", 1); //im constructor wird schon der fehler geworfen und im catch wird er ausgegeben
		//*wenn erfolgreich dann wird alles ab zeile 22 ausgeführt
		br->setGrade(100);
		std::cout << *br << std::endl;
		//////////////////////////////////////////////////////////////////////
		//*							WRONG GRADE 							//
		//////////////////////////////////////////////////////////////////////
		Bureaucrat *br2 = new Bureaucrat("Chunkz", 0);
		std::cout << *br2 << std::endl; 
	}catch(std::exception & e){
		std::cout << e.what() << std::endl;
	}

	return 0;
	
}