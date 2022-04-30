/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 13:46:34 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/04/28 16:41:15 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "Contacts.hpp"

void Contact::setName(std::string name)
{
    this->first_name = name;
}

void Contact::setNumber(std::string num)
{
    this->number = num;
}

std::string Contact::GetName()
{
    return(this->first_name);
}

std::string Contact::GetNumber()
{
    return(this->number);
}