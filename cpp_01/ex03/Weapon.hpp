/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 17:31:02 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/06/16 20:21:54 by mjeyavat         ###   ########.fr       */
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
        Weapon(const std::string typ);
        void setType(const std::string typ);
        std::string getTyp();
        ~Weapon();
};

#endif