/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 19:16:20 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/07/14 15:50:35 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Data.hpp"

/**
 * uintptr_t : is an unsigned integer type that is capable of storing a data pointer.
 * 				Which typically means that it's the same size as a pointer.
 * static_cast: kann verwandte ziel daten typen änder.
 * reinterpret_cast: Mit diesem Cast kann man den Datentyp einer Variablen "gewaltsam" ändern. 
*/

uintptr_t serialize(Data* ptr)
{
	return(reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return(reinterpret_cast<Data*>(raw));
}
