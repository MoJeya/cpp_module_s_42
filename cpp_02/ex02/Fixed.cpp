/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 14:44:25 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/06/22 19:24:11 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"


/**
 * TODO: Conversion calculation nochmal anschauen
*/

Fixed::Fixed()
{
    this->_fixValue = 0;
}

Fixed::Fixed(const int value)
{
    this->_fixValue = value << this->_fracBits;
}

Fixed::Fixed(const float value)
{
    this->_fixValue = roundf(value * (1 << this->_fracBits));
}

//copying values of one class in to another
Fixed::Fixed(const Fixed &cpyFixed)
{
    *this = cpyFixed;
}

Fixed& Fixed::operator=(const Fixed &fx)
{
    this->_fixValue = fx.getRawBits();
    return *this;
}

//pre increment
Fixed& Fixed::operator++()
{
    this->setRawBits(this->getRawBits()+1);
    return *this;
}

//post inc
Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    
    this->setRawBits(this->getRawBits() + 1);
    return tmp;
}

Fixed& Fixed::operator--()
{
    this->setRawBits(this->getRawBits()-1);
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    
    this->setRawBits(this->getRawBits()-1);
    return tmp;
}

bool Fixed::operator>(const Fixed &fx)
{
    if (this->getRawBits() > fx.getRawBits())
        return true;
    else
        return false;
}

bool Fixed::operator<(const Fixed &fx)
{
    if (this->getRawBits() < fx.getRawBits())
        return true;
    else
        return false;
}

bool Fixed::operator>=(const Fixed &fx)
{
    if (this->getRawBits() >= fx.getRawBits())
        return true;
    else
        return false;
}

bool Fixed::operator<=(const Fixed &fx)
{
    if (this->getRawBits() <= fx.getRawBits())
        return true;
    else
        return false;
}

bool Fixed::operator==(const Fixed &fx)
{
    if (this->getRawBits() == fx.getRawBits())
        return true;
    else
        return false;
}

bool Fixed::operator!=(const Fixed &fx)
{
    if (this->getRawBits() != fx.getRawBits()) 
        return true;
    else
        return false;   
}

Fixed Fixed::operator*(const Fixed &fx) const
{
    int result;
    Fixed tmp;
    
    result = (this->getRawBits() * fx.getRawBits()) / (1 << this->_fracBits);
    tmp.setRawBits(result);
    return (tmp);
}

Fixed Fixed::operator-(const Fixed &fx) const
{
    int result;
    Fixed tmp;
    
    result = this->getRawBits() - fx.getRawBits();
    tmp.setRawBits(result);
    return (tmp);
}

Fixed Fixed::operator+(const Fixed &fx) const
{
    int result;
    Fixed tmp;
    
    result = this->getRawBits() + fx.getRawBits();
    tmp.setRawBits(result);
    return (tmp);
}

Fixed Fixed::operator/(const Fixed &fx) const
{
    int result;
    Fixed tmp;

    result = this->getRawBits() / fx.getRawBits();
    tmp.setRawBits(result);
    return (tmp);
}

Fixed& Fixed::min(Fixed &fxOne, Fixed &fxTwo)
{
    if (fxOne < fxTwo)
        return fxOne;
    else
        return fxTwo;
}

Fixed const &Fixed::min(const Fixed &fxOne, const Fixed &fxTwo)
{
    if (static_cast<Fixed>(fxOne) < static_cast<Fixed>(fxTwo))
        return fxOne;
    else
        return fxTwo;
}

Fixed& Fixed::max(Fixed &fxOne, Fixed &fxTwo)
{
     if (fxOne > fxTwo)
        return fxOne;
    else
        return fxTwo;
}

Fixed const &Fixed::max(const Fixed &fxOne, const Fixed &fxTwo)
{
    if (static_cast<Fixed>(fxOne) > static_cast<Fixed>(fxTwo))
        return fxOne;
    else
        return fxTwo;
}

int Fixed::getRawBits() const{
    return (this->_fixValue);
}

void Fixed::setRawBits(int const raw)
{
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

}

std::ostream& operator<<(std::ostream& cout, const Fixed &fx)
{
    cout << fx.toFloat();
    return (cout);
}