/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 16:07:22 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/07/20 17:28:15 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Conversion.hpp"

Conversion::Conversion(){
	
}

Conversion::Conversion(std::string type)
{
	if (isFloatNumber(type))
		this->_type = type;
	else if (isDoubleNumber(type))
		this->_type = type;
	else if (isCharSing(type))
		this->_type = type;
	else
	{
		if (type != "nan")
		{
			int j = 0;
			if (type[0] == '-' && std::isdigit(type[1]))
				j++;
			else if (static_cast<int>(type.size()) > 1 && !std::isdigit(type[0]))
				throw std::invalid_argument("\033[31m Invalid Argument\033[0m");
			for (int i = j; i < static_cast<int>(type.size()); i++)
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

	std::strcpy(tmp, this->_type.c_str());
	double res = std::strtod(tmp, NULL);
	delete [] tmp;
	return res;
}

char Conversion::ConvertToChar()
{
	// std::cout << "res: " <<  ConvertToInt() << std::endl;
	if (this->_type == "nan" || (ConvertToInt() > 255 || ConvertToInt() < 0))
	{
		throw Conversion::Impossible();
		return(ConvertToInt());
	}
	else
	{
		if (isCharSing(this->_type))
		{
			char res = static_cast<char>(this->_type[0]);
			return res;
		}
		
		char res = ConvertToInt();
		if ((ConvertToInt() >= 0 && ConvertToInt() < 33) || ConvertToInt() > 129)
			throw Conversion::NonDisplayble();
		return res;
	}
	
	return (0);	
}

std::string Conversion::getType() {return this->_type;}

Conversion::~Conversion(){}

std::ostream& operator<<(std::ostream& cout, Conversion& c)
{
	//TODO: if isChar than convert typecast from char to every thing else.
	if (isFloatNumber(c.getType()))
	{
		try{
			std::cout << "Char: " << c.ConvertToChar() << '\n' << 
			"int: " << static_cast<int>(c.ConvertToFloat()) << '\n' <<
			"double: " << std::fixed << std::setprecision(2) << static_cast<double>(c.ConvertToFloat()) << '\n' <<
			"float: " << c.ConvertToFloat() << "f";	
		}catch(std::exception & e)
		{
			
			std::cout << e.what() << '\n' << 
			"int: " << c.ConvertToInt() << '\n' <<
			"double: " << std::fixed << std::setprecision(2) << c.ConvertToDouble()<< '\n' <<
			"float: " << c.ConvertToFloat() << "f";
			
		}
	}
	else if (isCharSing(c.getType()))
	{
		try{
			std::cout << "Char: " << c.ConvertToChar() << '\n' <<
			"int: " << static_cast<int>(c.ConvertToChar()) << '\n' <<
			"double: " << std::fixed << std::setprecision(2) << static_cast<double>(c.ConvertToChar()) << '\n' <<
			"float: " <<  std::fixed << std::setprecision(2) << static_cast<float>(c.ConvertToChar()) << 'f'; 
		}catch(std::exception & e)
		{
			if (c.ConvertToFloat() >= 0)
			{
				std::cout << e.what() << '\n' <<
				"int: " << c.ConvertToInt() << '\n' <<
				"double: " << std::fixed << std::setprecision(2) << c.ConvertToDouble() << '\n' <<
				"float: " << std::fixed << std::setprecision(2) << c.ConvertToFloat() << "f";
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
			std::cout << e.what() << '\n' <<
			"int: " << c.ConvertToInt() << '\n' <<
			"double: " << std::fixed << std::setprecision(2) << c.ConvertToDouble() << '\n' <<
			"float: " << std::fixed << std::setprecision(2) << 
			c.ConvertToFloat() << "f";
	
		}
	}
	else
	{
		try{
			std::cout << "char: " << c.ConvertToChar() << '\n' <<
			"int: " << c.ConvertToInt() << '\n' << 
			"double: " << std::fixed << std::setprecision(2) <<c .ConvertToDouble() << '\n' <<
			"float: " << std::fixed << std::setprecision(2) << c.ConvertToFloat() << "f";
			
		}catch(std::exception & e)
		{
			if (c.getType() != "nan")
			{
				std::cout << e.what() << '\n' <<
				"int: " << c.ConvertToInt() << '\n' <<
				"double " << std::fixed << std::setprecision(2) << c.ConvertToDouble() << '\n' <<
				"float: " << std::fixed << std::setprecision(2) << 
				c.ConvertToFloat() << "f";
			}
			else
			{
				std::cout << e.what() << '\n' <<
				"pnt: " << e.what() << '\n' << 
				"double: " << c.ConvertToDouble() << '\n' <<
				"float: " << c.getType() << "f";
			}
		}
	}
	return (cout);
}
