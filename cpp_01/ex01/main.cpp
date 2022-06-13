/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 19:25:34 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/06/13 20:25:40 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int argc, char *argv[])
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
    (void) argc;
    (void) argv;
    // system("leaks zombie");
    return (0);
}