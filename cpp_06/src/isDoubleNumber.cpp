/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isDoubleNumber.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 19:47:10 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/07/12 21:02:36 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Conversion.hpp"

bool isDoubleNumber(std::string type)
{
	bool isDecimalP = false;
	std::string::size_type pos = 0;
	
	pos = type.find('.');	
	if (static_cast<int>(pos) != -1)
	{
		if (static_cast<int>(type.size()) < 3)
			return isDecimalP;
		for(int i = static_cast<int>(pos)+1; i < static_cast<int>(type.size()); i++)
		{
			if (!std::isdigit(type[i]))
			{
				std::cout << "this" << std::endl;	
				return isDecimalP;
			}
		}
		isDecimalP = true;
	}
	return isDecimalP;
}