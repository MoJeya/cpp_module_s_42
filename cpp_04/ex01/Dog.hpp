/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 19:28:32 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/07/04 17:07:50 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{

	private:
		Brain *brain;
	public:
		Dog();
		Dog(Dog &d);
		Dog& operator=(Dog &d);
		virtual void makeSound();
		void setIdeas(Brain &b);
		std::string getIdea();
		~Dog();
};