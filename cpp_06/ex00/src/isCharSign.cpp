/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isCharSign.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 12:41:41 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/07/20 16:43:47 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Conversion.hpp"

bool isCharSing(std::string type)
{
	bool sign = false;
	if (static_cast<int>(type.size()) == 1 && !(type[0] >= '0' && type[0] <= '9'))
	{
		if (std::isalpha(type[0]) || (static_cast<int>(type[0]) > 32 && static_cast<int>(type[0]) < 255))
			sign = true;	
	}
	return sign;
}