/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 19:19:59 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/06/29 19:43:27 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void ){
	std::cout << "\033[34mBRAIN\033[0m:	CONSTRUCTOR HAS BEEM CALLED" << std::endl;
}

Brain::Brain(Brain &b)
{
	*this = b;	
}

Brain& Brain::operator=(Brain &b)
{
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = b.ideas[i];
	}
	return *this;
}

Brain::~Brain(void)
{
	std::cout << "\033[34mBRAIN\033[0m : DECONSTURCTOR WAS CALLED" << std::endl;
}
