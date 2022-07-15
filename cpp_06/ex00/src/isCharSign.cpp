/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isCharSign.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 12:41:41 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/07/15 12:46:11 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Conversion.hpp"

bool isCharSing(std::string type)
{
	bool sign = false;
	if (static_cast<int>(type.size()) == 1)
	{
		if (std::isalpha(type[0]))
			sign = true;	
	}
	return sign;
}