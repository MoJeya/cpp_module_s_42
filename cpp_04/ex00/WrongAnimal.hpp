/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 19:30:45 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/06/28 19:30:48 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class WrongAnimal{

	protected:
		std::string _type;
	
	public:
		WrongAnimal();
		//cpy
		WrongAnimal (WrongAnimal &a);
		
		WrongAnimal& operator=(WrongAnimal &a);
		
		void setType(std::string name);
		std::string getType();
		virtual void makeSound();
		
		virtual ~WrongAnimal();

};
