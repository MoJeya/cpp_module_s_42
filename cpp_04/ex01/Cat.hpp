/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 19:30:24 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/07/01 16:52:47 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : virtual public Animal{
	private:
		Brain *brain;
	public:
		Cat();
		//cpy constructor
		Cat(Cat &c);
		Cat& operator=(Cat &c);
		void makeSound();
		// virtual std::string getIdea();
		~Cat();
};