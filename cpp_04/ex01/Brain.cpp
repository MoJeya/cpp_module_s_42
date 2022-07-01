/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 19:19:59 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/07/01 16:01:01 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	
}

Brain::Brain( std::string ideas ){
	std::cout << "\033[34mBRAIN\033[0m:	CONSTRUCTOR HAS BEEM CALLED" << std::endl;
	for(int i = 0; i < 100; i++)
		this->ideas[i] = ideas;
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

std::string Brain::getIdeas( unsigned long index )
{
	return(this->ideas[index]);
}

void Brain::setIdeas(const std::string id)
{
		this->ideas[0] = id;
}

Brain::~Brain(void)
{
	std::cout << "\033[34mBRAIN\033[0m : DECONSTURCTOR WAS CALLED" << std::endl;
}
