/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomeChump.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 19:29:57 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/06/28 12:08:32 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/**
 * The I=Object on this function is
 * created on the !Stack
*/

void randomChump(std::string name)
{
    Zombie newZ;
    newZ.setName(name);
    newZ.announce();
}