/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 19:46:10 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/07/28 15:30:29 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <iterator>

class Span{

	private:
		const unsigned int _nMax;
		std::vector<int> _a;
	
	public:
		Span();
		Span(unsigned int N);
		Span(const Span &sp);
		Span& operator=(const Span &sp);
		~Span();
		int shortestSpan();
		int longestSpan();
		void addNumber(int num);
		void addNumber(std::vector<int>::iterator start, std::vector<int>::iterator end);

		class NoSpan : public std::exception {
			const char * what() const throw () {
				return "\033[31m Span can not be found\033[0m";
			}
		};

		class maxOut : public std::exception {
			const char * what() const throw() {
				return "\033[31m Max size reached\033[0m";
			}
		};
		
};