/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 19:38:39 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/07/19 21:00:05 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <algorithm>
#include <iostream>

template<typename T>
T easyfind(T *ar, int num)
{
	T::iterator cnt;
	for(cnt = ar.begin(); cnt != ar.end(); ++cnt)
	{
		if (*cnt == num)
		{
			std::cout << "Num Found" << std::endl;
			return (*cnt);
		}
	}
	return (*ar->end());
}
