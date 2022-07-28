/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 18:14:11 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/07/27 12:00:57 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./inc/inter.hpp"

int main(void)
{
	try
	{
		int ar[] = { 1 , 2 , 3, 4, 5};
		iter<int>(ar, 5, addFive<int>);
		for(int i = 0; i < 5; i++)
		{
			std::cout << ar[i] << std::endl;
		}
		std::cout << std::endl;
		
		float FAr[] = {1.24f, 2.134f, 3.324f, 4.564f};
		iter<float>(FAr, 4, addFive<float>);
		for(int i = 0; i < 4; i++)
		{
			std::cout << FAr[i] << std::endl;
		}
		std::cout << std::endl;	
	}catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	

	std::string sAR[] = {"hallo", "hallo world", "hallo world c++"};
	iter<std::string>(sAR, 4, print<std::string>);

	return 0;
}