/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IceMateria.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 19:57:07 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/07/04 20:02:46 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/IceMateria.hpp"

IceMateria::IceMateria()
{
	this->_mType = "ice";
}

AMateria* IceMateria::clone() override {return (*this);}


