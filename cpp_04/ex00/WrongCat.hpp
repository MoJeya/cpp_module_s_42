/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 19:31:05 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/06/28 19:31:10 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{

	private:

	public:
		WrongCat();
		WrongCat(WrongCat &wr);
		WrongCat& operator=(WrongCat &wr);
		virtual void makeSound();
		~WrongCat();
};