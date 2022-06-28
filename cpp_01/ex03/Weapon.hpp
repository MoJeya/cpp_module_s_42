/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 17:31:02 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/06/28 12:37:05 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>


class Weapon
{
    private:
        std::string _typ;
    public:
        Weapon(void);
        Weapon(const std::string typ);
        void setType(const std::string typ);
        std::string getTyp();
        ~Weapon();
};

#endif