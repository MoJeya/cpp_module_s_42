/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 19:46:10 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/07/20 21:05:20 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <vector>

class Span{

	private:
		unsigned int _nMax;
		std::vector<int> _a;
	
	public:
		Span();
		Span(unsigned int N);
		Span(Span &sp);
		Span& operator=(Span &sp);
		~Span();
		int shortestSpan();
		int longestSpan();
		void addNumber(int num);
		
};