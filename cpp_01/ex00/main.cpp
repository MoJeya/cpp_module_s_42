/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 19:25:34 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/06/13 19:56:52 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int argc, char *argv[])
{
    Zombie *zombie1 = newZombie("Willy");
    randomChump("chump");
    zombie1->announce();
    delete zombie1;
    (void) argc;
    (void) argv;
    // system("leaks zombie");
    return (0);
}