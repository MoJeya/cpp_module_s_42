/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isFloatNumber.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 17:16:06 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/07/13 15:50:18 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Conversion.hpp"
/**
 * 
    // Element to be searched
    int ser = 30;
  
    // std::find function call
    it = std::find (vec.begin(), vec.end(), ser);
*/


bool isFloatNumber(std::string type)
{
	bool fMark = false;
	bool decimalP = false;
	std::string::size_type pos = 0;
	pos = type.find('f');
	if (pos == type.size()-1 && type.size() >= 5)
		fMark = true;
	pos = 0;
	if (fMark)
	{
		pos = type.find('.');
		if (static_cast<int>(pos) != -1)
			decimalP = true;
	}
	if (decimalP == true && fMark == true)
		return true;
	return false;
}