/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 19:30:24 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/07/14 19:10:55 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
	private:
		Brain *brain;
	public:
		Cat();
		Cat(Cat &c);
		Cat& operator=(Cat &c);
		std::string getType();
		virtual void makeSound();
		std::string getIdea();
		~Cat();
};