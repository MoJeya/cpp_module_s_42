/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 19:08:32 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/06/23 19:56:05 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap t1("BIIL");
	ClapTrap t2("Opp");

	t1.setAttackDamage(3);
	t1.attack(t2.getName());
	t2.takeDamage(3);
	t2.beRepaired(5);
	std::cout << "ClapTrap " << t2.getName() << " now has " << t2.getHitPoint() << " back" << std::endl;
	return 0;
}