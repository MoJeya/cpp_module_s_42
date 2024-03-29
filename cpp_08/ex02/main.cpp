/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 15:11:27 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/07/28 15:57:19 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/MutantStack.hpp"
#include <list>

void testAsList()
{
	std::list<int> asList;
	asList.push_back(5);
	asList.push_back(17);
	std::cout << asList.back() << std::endl;
	asList.pop_back();
	std::cout << asList.size() << std::endl;
	asList.push_back(3);
	asList.push_back(5);
	asList.push_back(737);

	asList.push_back(0);
	std::list<int>::iterator it = asList.begin();
	std::list<int>::iterator ite = asList.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
}

int main()
{

//SUBJECT TEST
	MutantStack<int> mstack;
	
	mstack.push(5);
	mstack.push(17);
	
	std::cout << mstack.top() << std::endl;
	
	mstack.pop();
	
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

//TEST A LIST
std::cout << "TEST A STD::LIST-----------------------------------" << std::endl;
	testAsList();
	
	return 0;
}