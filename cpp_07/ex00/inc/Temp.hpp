/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Temp.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:13:13 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/07/18 18:01:23 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template<typename t>
void swap(t &value1, t &value2)
{
	t value3;

	value3 = value1;
	value1 = value2;
	value2 = value3;
}

template<typename t>
t min(t val1, t val2)
{
	if (val1 < val2)
		return val1;
	return val2;
}

template<typename t>
t max(t val1, t val2)
{
	if (val1 > val2)
		return val1;
	return val2;
}