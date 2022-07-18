/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 12:48:38 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/07/18 15:36:12 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./src/ABase.cpp"
#include "./src/BBase.cpp"
#include "./src/CBase.cpp"
#include "./inc/Base.hpp"

Base * generate(void)
{
	//v2 = rand() % 100 + 1;     // v2 in the range 1 to 100
	std::srand(std::time(0));
	int randNumber = rand() % 3 + 1;
	std::cout << randNumber << std::endl;
	switch (randNumber)
	{
	case 1:
		std::cout << "typ: a" << std::endl;
		return (new ABase());
		break;
	case 2:
		std::cout << "typ: b" << std::endl;
		return (new BBase());
		break;
	case 3:
		std::cout << "typ: c" << std::endl;
		return (new CBase());
		break;
	default:
		return (nullptr);
		break;
	}
	return NULL;
}

void identify(Base* p)
{
	if (dynamic_cast<ABase *>(p) != nullptr)
		std::cout << "Type: A" << std::endl;
	if (dynamic_cast<BBase *>(p) != nullptr)
		std::cout << "Type: B" << std::endl;
	if (dynamic_cast<CBase *>(p) != nullptr)
		std::cout << "Type C" << std::endl;	
}

void identify(Base& p)
{
	try{
		(void)dynamic_cast<ABase&>(p);
		std::cout << "Type A" << std::endl;
	}catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	try{
		(void)dynamic_cast<BBase&>(p);
		std::cout << "Type B" << std::endl;
	}catch(std::exception & e){
		std::cout << e.what() << std::endl;
	}

	try{
		(void)dynamic_cast<CBase&>(p);
		std::cout << "Type C" << std::endl;
	}catch(std::exception & e){
		std::cout << e.what() << std::endl;
	}
}

int main(void)
{
	std::cout << "TEST1__________________" << std::endl;
	identify(generate());
	// std::cout << "TEST2__________________" << std::endl;
	// Base *b = generate();
	// identify(b);
	
	return (0);
}
