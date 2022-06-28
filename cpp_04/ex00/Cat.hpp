/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 19:30:24 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/06/28 19:30:29 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Cat : public Animal{
	private:

	public:
		Cat();
		//cpy constructor
		Cat(Cat &c);
		Cat& operator=(Cat &c);
		virtual void makeSound();
		~Cat();
};