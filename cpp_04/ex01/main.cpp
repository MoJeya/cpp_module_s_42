/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 19:28:21 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/07/04 17:11:48 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"


int main()
{

	Animal *a[20];
	for (int i = 0; i < 20; i++)
	{
		if (i < (10))
		{
			a[i] = new Dog();
		}
		else
		{
			a[i] = new Cat();
		}
	}
	std::cout << "Dog thinks about " << a[0]->getIdea() << std::endl;
	std::cout << a[11]->getType() << " thinks about " << a[11]->getIdea() << std::endl;
	std::cout << "Delete everything" << std::endl;
	for (int i = 0; i < 20; i++)
	{
		delete a[i];
	}
	return(0);
}