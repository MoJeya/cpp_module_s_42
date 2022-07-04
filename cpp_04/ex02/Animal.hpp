/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 19:30:13 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/07/04 17:21:06 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Animal{

	protected:
		std::string _type;
		Animal();
	
	public:
		//cpy
		Animal (Animal &a);	
		Animal& operator=(Animal &a);
		
		void setType(std::string name);
		std::string getType();
		virtual std::string getIdea();
		virtual void makeSound();
		
		virtual ~Animal();

};

