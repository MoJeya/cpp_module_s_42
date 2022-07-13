/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 16:07:22 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/07/13 17:00:01 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Conversion.hpp"

Conversion::Conversion(){
	
}

Conversion::Conversion(std::string type)
{
	if (isFloatNumber(type))
	{
		this->_type = type;
	}
	else if (isDoubleNumber(type))
	{
		
		this->_type = type;
	}
	else
	{
		if (type != "nan")
		{
			if (static_cast<int>(type.size()) > 1 && !std::isdigit(type[0]))
				throw std::invalid_argument("\033[31m Invalid Argument\033[0m");
			for (int i = 0; i < static_cast<int>(type.size()); i++)
			{
				if (!std::isdigit(type[i]))
					throw std::invalid_argument("\033[31m Invalid Argument\033[0m");
			}
		}
		this->_type = type;
	}
}

Conversion::Conversion(Conversion &c)
{
	*this = c;
}

Conversion& Conversion::operator=(Conversion &c)
{
	if (this != &c)
		this->_type = c._type;
	return *this;
}

int Conversion::ConvertToInt()
{	
	if (this->_type == "nan")
		throw Conversion::Impossible();
	else
	{
		int res = std::stoi(this->_type);
		return res;	
	}
	return 0;
}

float Conversion::ConvertToFloat()
{
	float res = std::stof(this->_type);
	return res;
}

double Conversion::ConvertToDouble()
{
	double res = std::stof(this->_type);
	return res;
}

char Conversion::ConvertToChar()
{
	if (this->_type == "nan")
	{
		throw Conversion::Impossible();
		return 0;
	}
	else
	{
		char res = std::stoi(this->_type);
		if (static_cast<int>(res) <= 0 || static_cast<int>(res) > 255)
			throw Conversion::NonDisplayble();
		return res;
	}
	
	return (0);	
}

std::string Conversion::getType() {return this->_type;}

Conversion::~Conversion(){}

std::ostream& operator<<(std::ostream& cout, Conversion& c)
{
	if (isFloatNumber(c.getType()))
	{
		try{
			std::cout << "Char: " << c.ConvertToChar() << '\n' << 
			"int: " << c.ConvertToInt() << '\n' <<
			"double: " << std::fixed << std::setprecision(2) << c.ConvertToDouble() << '\n' <<
			"float: " << std::fixed << std::setprecision(2) << 
			c.ConvertToFloat() << "f";	
		}catch(std::exception & e)
		{
			if (std::stoi(c.getType()) >= 0)
			{
				std::cout << e.what() << '\n' <<
				"int: " << c.ConvertToInt() << '\n' <<
				"double: " << std::fixed << std::setprecision(2) << c.ConvertToDouble() << '\n' <<
				"float: " << std::fixed << std::setprecision(2) << 
				c.ConvertToFloat() << "f";
			}
			else
			{
				std::cout << e.what() << '\n' << 
				"int: " << e.what() << '\n' <<
				"double: " << c.getType() << '\n' <<
				"float: " << c.getType();
			}
			
		}
		
		
	}
	else if (isDoubleNumber(c.getType()))
	{
		try{
			std::cout << "Char: " << c.ConvertToChar() << '\n' << 
			"int: " << c.ConvertToInt() << '\n' <<
			"double: " << c.getType() << '\n' <<
			"float: " << std::fixed << std::setprecision(2) << 
			c.ConvertToFloat() << "f";

		}catch(std::exception & e)
		{
			if (std::stoi(c.getType()) >= 0)
			{
				std::cout << e.what() << '\n' <<
				"int: " << c.ConvertToInt() << '\n' <<
				"double: " << std::fixed << std::setprecision(2) << c.ConvertToDouble() << '\n' <<
				"float: " << std::fixed << std::setprecision(2) << 
				c.ConvertToFloat() << "f";
			}
			else
			{
				std::cout << e.what() << '\n' << 
				"int: " << e.what() << '\n' <<
				"double: " << std::fixed << std::setprecision(2)<< c.ConvertToDouble() << '\n' <<
				"float: " << c.getType() << "f";
			}
		}
	}
	else
	{
		try{
			std::cout << "Char: " << c.ConvertToChar() << '\n' <<
			"int: " << c.ConvertToInt() << '\n' << 
			"double: " << std::fixed << std::setprecision(2) << c.ConvertToDouble() << '\n' <<
			"float: " << std::fixed << std::setprecision(2) << 
			c.ConvertToFloat() << "f";
			
		}catch(std::exception & e)
		{
			if (c.getType() != "nan" && std::stoi(c.getType()) >= 0)
			{
				std::cout << e.what() << '\n' <<
				"int: " << c.ConvertToInt() << '\n' <<
				"double " << std::fixed << std::setprecision(2) << c.ConvertToDouble() << '\n' <<
				"float: " << std::fixed << std::setprecision(2) << 
				c.ConvertToFloat() << "f";
			}
			else
			{
				std::cout <<e.what() << '\n' <<
				"pnt: " << e.what() << '\n' << 
				"double: " << c.getType() << '\n' <<
				"float: " << c.getType() << "f";
			}
		}
	}
	return (cout);
}
