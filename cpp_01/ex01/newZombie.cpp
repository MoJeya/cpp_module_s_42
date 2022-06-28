/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 19:29:23 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/06/28 18:24:13 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/**
 * this Function is
 * creates an new object on the
 * !Heap
 * and thats why it has to be destroyed 
 * after we dont need it anymore
 * ?delete <name of object>
*/

Zombie* newZombie( std::string name )
{
    Zombie *newZ = new Zombie();
    newZ->setName(name);
    return (newZ);
}