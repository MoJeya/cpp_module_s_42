/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 12:31:20 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/06/28 12:34:10 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

#include "Weapon.hpp"

class HumanA
{
    private:
        Weapon& weapon;
        const std::string name;
    public:
        HumanA (const std::string& name, Weapon& weapon);
        std::string getName();
        std::string getWeapon();
        void attack();
};
#endif