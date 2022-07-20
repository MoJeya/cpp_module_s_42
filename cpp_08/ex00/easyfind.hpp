/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 19:38:39 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/07/20 19:41:35 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <algorithm>
#include <iostream>
#include <vector>
// typename T::iterator easyfind(T &con, int i)

/**
 cpp referenc
template<class InputIterator, class T>
  InputIterator find (InputIterator first, InputIterator last, const T& val)
{
  while (first!=last) {
    if (*first==val) return first;
    ++first;
  }
  return last;
}
*/

class Notfound : public std::exception{
	const char * what() const throw () {
		return "\033[31m Not Found\033[0m";
	}
};

template<typename T>
typename T::iterator easyfind(T &ar, int num) //iterator an einem Template
{
	typename T::iterator it = std::find(ar.begin(), ar.end(), num);
	if (it == ar.end())
		throw Notfound();
	return (it);
};

