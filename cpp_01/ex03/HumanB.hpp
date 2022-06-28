/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 12:30:58 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/06/28 12:53:30 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

#include "Weapon.hpp"

class HumanB
{
    private:
        Weapon *weapon;
        std::string _name;
    public:
        HumanB(void);
        HumanB(const std::string& name);
        std::string getName();
        Weapon getWeapon();
        void setWeapon(Weapon& weapon);
        void attack();
};

#endif