/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 20:01:05 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/06/13 20:01:08 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce(void)
{
    std::cout << this->name << ":" << " \033[32mBraiiiiiiinnnzzzZ...\033[0m" << '\n';
}

void Zombie::setName(std::string name)
{
    this->name = name;
}

Zombie::~Zombie(void)
{
    std::cout << "\033[34mDECONSTUCTOR WAS CALLED\033[0m\n"<<"\033[31mDestroyed\033[0m:\t"<<this->name << '\n';
}
