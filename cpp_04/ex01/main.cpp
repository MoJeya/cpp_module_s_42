/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 19:28:21 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/07/01 16:53:10 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"


int main()
{
	Animal* meta = new Animal [20];
	std::string idea[100];

	for (int i = 0; i < 20; i++)
	{
		if (i < (20))
			meta[i] = new Dog();
		else
			meta[i] = new Cat();
	}
 	
	delete [] meta;
	return(0);
}