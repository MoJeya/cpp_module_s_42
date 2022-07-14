/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 19:30:13 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/07/14 19:00:05 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Animal{

	protected:
		std::string _type;	
		Animal();
	public:
		virtual std::string getType() = 0;
		virtual std::string getIdea() = 0;
		virtual void makeSound() = 0;
		virtual ~Animal() = 0;
};

