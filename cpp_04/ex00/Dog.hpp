/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 19:28:32 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/07/01 13:05:40 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Dog : public Animal{

	private:

	public:
		Dog();
		Dog(Dog &d);
		Dog& operator=(Dog &d);
		virtual void makeSound();
		~Dog();
};