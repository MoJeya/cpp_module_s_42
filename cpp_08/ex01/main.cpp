/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 19:55:54 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/07/26 20:44:52 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

int main(void)
{
	try
	{
		
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;

		Span m = Span(10000);
	
		std::vector<int> v;
		for (int i = 0; i < 10000; i++) {
			v.push_back(i);
		}
		std::vector<int>::iterator it;
		for(it = v.begin(); it != v.end(); it++)
		{
			m.addNumber(*it);
		}

		std::cout << m.shortestSpan() << std::endl;
		std::cout << m.longestSpan() << std::endl;
	
	}catch(std::exception & e)
	{
		std::cout << e.what();
	}

	return 0;
}