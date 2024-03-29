/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 19:38:39 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/07/26 18:51:05 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <algorithm>
#include <iostream>
#include <vector>

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

