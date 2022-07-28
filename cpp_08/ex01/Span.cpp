/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 19:45:07 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/07/28 15:46:31 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


Span::Span() : _nMax() {}

Span::Span( unsigned int N ) : _nMax(N) {}

Span::Span(const Span &sp) : _nMax(sp._nMax), _a(sp._a){}

Span& Span::operator=(const Span &sp)
{
	if (this != &sp && (sp._a.size() < this->_nMax))
	{
		for(std::vector<int>::const_iterator it = sp._a.begin(); it != sp._a.end(); it++)
		{
			this->_a.push_back(*it);
		}
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

void Span::addNumber(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
	for(std::vector<int>::iterator i = start; i != end; i++)
	{
		if (this->_a.size() + 1 > this->_nMax)
			throw maxOut();
		else
			this->_a.push_back(*i);
	}
}