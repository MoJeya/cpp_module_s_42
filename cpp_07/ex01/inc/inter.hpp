/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 18:03:33 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/07/27 12:13:41 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template<typename t>
t addFive(t a)
{
	a += 5;
	return (a);
}

template<typename t>
t print(t a)
{
	std::cout << a << std::endl;
	return (a);
}

template <typename t>
void iter(t ar[], size_t len, t(*funct2)(t a))
{
	for (size_t i = 0; i < len; i++)
	{
		ar[i] = funct2(ar[i]);
	}
}
