/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 19:28:21 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/07/04 17:24:54 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"


int main()
{

	// const Animal *a = new Animal(); // -> doesnt work because the class is non instantiable
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	delete j;
	delete i;
	return(0);
}