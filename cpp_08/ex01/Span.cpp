/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 19:45:07 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/07/26 20:37:19 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


Span::Span() : _nMax() {}

Span::Span( unsigned int N ) : _nMax(N) {}

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

}

int Span::shortestSpan()
{

	std::vector<int>::iterator it = this->_a.begin();
	std::vector<int>::iterator itTwo = this->_a.begin() + 1;

	int answer = 0;
	answer = abs(*it - *itTwo);
	for (it = this->_a.begin(); it != this->_a.end(); it++)
	{
		for (itTwo = it+1;itTwo != this->_a.end(); ++itTwo)
		{
			if (answer > abs(*it - *itTwo))
				answer = abs(*it - *itTwo);
		}
	}
	if (answer == 0 || this->_a.empty())
		throw Span::NoSpan();
	else
		return answer;
}

int Span::longestSpan()
{
	std::vector<int>::iterator it = this->_a.begin();
	std::vector<int>::iterator itTwo = this->_a.begin() + 1;

	int ans = abs(*it - *itTwo);
	for(it = this->_a.begin(); it != this->_a.end(); it++)
	{
		for(itTwo = it+1; itTwo != this->_a.end(); ++itTwo)
		{
			if (ans < abs(*it - *itTwo))
				ans = abs(*it - *itTwo);
		}
	}
	if (ans == 0 || this->_a.empty())
		throw Span::NoSpan();
	else
		return ans;
}

void Span::addNumber(int num)
{
	std::vector<int>::iterator it;
	if (this->_a.size() == this->_nMax)
		throw maxOut();
	else
		this->_a.push_back(num);
}