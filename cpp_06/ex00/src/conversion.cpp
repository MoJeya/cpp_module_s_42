/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 16:07:22 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/07/14 20:28:42 by mjeyavat         ###   ########.fr       */
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
		char *tmp = new char[static_cast<int>(this->_type.size())];
		char *end;
		std::strcpy(tmp, this->_type.c_str());
		int res = static_cast<int>(std::strtod(tmp, &end));
		delete [] tmp;
		return res;	
	}
	return 0;
}

float Conversion::ConvertToFloat()
{
	char *tmp = new char [static_cast<int>(this->_type.size())];
	std::strcpy(tmp, this->_type.c_str());
	char *end;
	float res = std::strtof(tmp, &end);
	delete [] tmp;
	return res;
}

double Conversion::ConvertToDouble()
{
	char *tmp = new char[static_cast<int>(this->_type.size())];
	char *end;
	std::strcpy(tmp, this->_type.c_str());
	double res = std::strtod(tmp, &end);
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
			"int: " << static_cast<int>(c.ConvertToFloat()) << '\n' <<
			"double: " << std::fixed << std::setprecision(2) << static_cast<double>(c.ConvertToFloat()) << '\n' <<
			"float: " << c.ConvertToFloat() << "f";	
		}catch(std::exception & e)
		{
			if (std::stoi(c.getType()) >= 0)
			{
				std::cout << e.what() << '\n' <<
				"int: " << c.ConvertToInt() << '\n' <<
				"double: " << std::fixed << std::setprecision(2) << c.ConvertToDouble() << '\n' <<
				"float: " << c.ConvertToFloat() << "f";
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
			"int: " << static_cast<int>(c.ConvertToDouble()) << '\n' <<
			"double: " <<std::fixed << std::setprecision(2) << c.ConvertToDouble() << '\n' <<
			"float: " << std::fixed << std::setprecision(2) << static_cast<float>(c.ConvertToDouble()) << "f";

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
			"double: " << std::fixed << std::setprecision(2) <<c .ConvertToDouble() << '\n' <<
			"float: " << std::fixed << std::setprecision(2) << c.ConvertToFloat() << "f";
			
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
