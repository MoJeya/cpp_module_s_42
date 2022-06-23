/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 13:46:34 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/06/23 12:59:28 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "Contacts.hpp"

void Contact::setName(std::string name)
{
    this->firstName = name;
}

void Contact::setLastName(std::string lName)
{
    this->lastName = lName;
}

void Contact::setNickName(std::string nName)
{
    this->nickName = nName;
}

void Contact::setNumber(std::string num)
{
    this->number = num;
}

void Contact::setDarkestSecret(std::string dSecret)
{
    this->darkestSecret = dSecret;
}

void Contact::setSearchID(int index)
{
    this->searchID = index;
}

std::string Contact::GetName(void)
{
    return(this->firstName);
}

std::string Contact::GetLastName(void)
{
    return(this->lastName);
}

std::string Contact::GetNickName(void)
{
    return(this->nickName);
}

std::string Contact::GetNumber(void)
{
    return(this->number);
}

std::string Contact::GetDS(void)
{
    return(this->darkestSecret);
}

int Contact::GetSearchID(void)
{
    return(this->searchID);
}