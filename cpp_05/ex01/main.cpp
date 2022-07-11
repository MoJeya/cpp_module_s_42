/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 21:12:27 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/07/11 16:33:33 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Bureaucrat.hpp"
#include "inc/Form.hpp"
#include <string>

int main (void)
{

	try{
		Bureaucrat *br = new Bureaucrat("Bob", 1); //im constructor wird schon der fehler geworfen und im catch wird er ausgegeben
		std::cout << *br << std::endl;
		Form *fr = new Form("\033[34mtest letter\033[0m");
		//*wenn erfolgreich dann wird alles ab zeile 22 ausgeführt
		br->signForm(*(fr));
		//////////////////////////////////////////////////////////////////////
		//*							WRONG GRADE 							//
		//////////////////////////////////////////////////////////////////////
		Bureaucrat *br2 = new Bureaucrat("Chunkz", 5);
		std::cout << *br2 << std::endl; 
		Form *fr2 = new Form("Importent letter");
		br2->signForm(*(fr2));
	}catch(std::exception & e){
		std::cout << e.what() << std::endl;
	}
	return 0;
}