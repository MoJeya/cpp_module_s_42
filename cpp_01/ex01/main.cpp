/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 19:25:34 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/06/28 12:20:09 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie *horde;

    horde = zombieHorde(4, "Brian");
    int i = 0;

    while (i < 4)
    {
        horde[i].announce();
        i++;
    }
    delete [] horde; // delete an arry of objects
    return (0);
}