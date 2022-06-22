/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 14:44:25 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/06/22 15:10:43 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->_fixValue = 0;
}

Fixed::~Fixed()
{
    std::cout << "Deconstructor is called for "<< this->_fixValue << std::endl;
}

//copying values of one class in to another
Fixed::Fixed(const Fixed &cpyFixed)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = cpyFixed;
}

Fixed& Fixed::operator=(const Fixed &fx)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->_fixValue = fx.getRawBits();
    return *this;
}

int Fixed::getRawBits() const{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_fixValue);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setter function is called" << std::endl;
    this->_fixValue = raw;
}