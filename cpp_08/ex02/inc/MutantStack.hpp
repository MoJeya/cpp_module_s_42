/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 13:38:13 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/07/26 16:53:51 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <algorithm>
#include <iterator>
#include <deque>
#include <stack>

template<typename T>
class MutantStack : public std::stack<T>{	
	
	public:
	// expose just the iterators of the underlying container
	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator begin() { return this->c.begin();} 
	iterator end() { return this->c.end();}
	iterator begin() const {return this->c.begin();}
	iterator end() const { return this->c.end();}
};