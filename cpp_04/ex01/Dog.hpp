/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 19:28:32 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/07/01 16:52:59 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : virtual public Animal{

	private:
		Brain *brain;
	public:
		Dog();
		Dog(Dog &d);
		Dog& operator=(Dog &d);
		void makeSound();
		// virtual std::string getIdea();
		void setIdeas(Brain &b);
		~Dog();
};