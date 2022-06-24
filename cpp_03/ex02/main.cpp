/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 19:08:32 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/06/24 17:30:13 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	FragTrap	a( "Potter" );

	a.attack( "Malfoy" );
	a.takeDamage(100);
	a.beRepaired(3);
	a.highFivesGuys();
	return 0;
}