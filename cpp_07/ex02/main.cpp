/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 09:43:00 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/07/19 14:16:40 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./inc/Array.hpp"

int main(void)
{
	std::cout << "\033[34mINT ARRAY\033[0m" << std::endl;
	try{
		Array<int>a(10);
		std::cout << "size: " << a.getSize() << std::endl; 
		for(int i = 0; i < 10; i++)
		{
			a[i] = i;
			std::cout << "Value: " << a[i] << std::endl;
		}

		std::cout << "\033[34mFLOAT ARRAY\033[0m" << std::endl;
		Array<float>f(10);
		std::cout << "size: " << f.getSize() << std::endl;
		for(int i = 0; i < 10; i++)
		{
			f[i] = i+0.89f;
			std::cout << "Value: " << f[i] << std::endl;
		}

		std::cout << "\033[34mOut of Bound test\033[0m" << std::endl;
		for(unsigned int i = 0; i < 11; i++)
		{
			std::cout << "Value: " << f[i] << std::endl;
		}

	}catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	return(0);
}