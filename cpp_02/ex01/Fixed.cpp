/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 14:44:25 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/06/22 17:34:02 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

/**
 * Calculate x = floating_input * 2^(fractional_bits)
Round x to the nearest whole number (e.g. round(x) )
Store the rounded x in an integer container.
*/
Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->_fixValue = 0;
}

Fixed::Fixed(const int value)
{
    std::cout << "Integer constructor is called" << std::endl;
    this->_fixValue = value << this->_fracBits;
}

Fixed::Fixed(const float value)
{
    std::cout << "Float constructor is called" << std::endl;
    this->_fixValue = roundf(value * (1 << this->_fracBits));
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

/**
 * Convert the fixed-point number as an integer.
    Divide the number by 2^n (2 to the power of n).
*/

float Fixed::toFloat() const
{
    float result;

    result = static_cast<float>(this->_fixValue / static_cast<float>(1 << this->_fracBits));
    return (result);
}

int Fixed::toInt() const
{
    int result;
    result = static_cast<int>(this->_fixValue >> this->_fracBits);
    return (result);
}

Fixed::~Fixed()
{
    std::cout << "Deconstructor is called"<< std::endl;
}

std::ostream& operator<<(std::ostream& cout, const Fixed &fx)
{
    cout << fx.toFloat();
    return (cout);
}