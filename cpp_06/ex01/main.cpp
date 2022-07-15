/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 15:50:44 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/07/15 17:35:27 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Data.hpp"

int main()
{
	Data *d = new Data;

	d->_name = "Ami";

	std::cout << "struct d: " << d->_name << std::endl;

	uintptr_t numPtr = serialize(d);

	std::cout << "uint numPtr: " << numPtr << std::endl;
	
	Data *d2;

	d2 = deserialize(numPtr);
	
	std::cout << "struct d2: " << d2->_name << std::endl;

	return (0);
}