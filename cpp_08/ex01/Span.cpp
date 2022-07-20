/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 19:45:07 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/07/20 21:05:15 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(){
	
}
//void resize (size_type n, value_type val = value_type());
Span::Span(unsigned int N)
{
	this->_a.resize(N, this->_a.size());
	std::cout << "vector has " << N << "amount of space" << std::endl;
}

Span::Span(Span &sp)
{
	*this = sp;
}

Span& Span::operator=(Span &sp)
{
	if (this != &sp)
	{
		this->_a = sp._a;
		this->_nMax = sp._nMax;
	}
	return *this;
}

Span::~Span()
{
	std::cout << "deconstructor was called" << std::endl;
}

int Span::shortestSpan()
{
	//TODO: write Iterator function her!!!!
}