/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 20:55:42 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/07/20 19:41:03 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main( void )
{
	std::vector<int> a;
	
	a.push_back(5);
	a.push_back(1);
	a.push_back(2);
	a.push_back(9);
	
	try{
		std::cout << *easyfind(a, 5) << std::endl;
	}catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}