/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 16:46:34 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/07/12 19:38:59 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./inc/Conversion.hpp"

void run_conversion(int argc, char *argv[])
{
	if (argc == 1)
		throw std::invalid_argument("\033[31m Invalid Argument\033[0m");
	else if (argc == 2)
	{
		try
		{
			Conversion *c1 = new Conversion(argv[1]);
			std::cout << *c1 << std::endl;
			delete c1;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	else
		throw std::invalid_argument("\033[31m Invalid Argument\033[0m");
}

int main(int argc, char *argv[])
{
	try{
		run_conversion(argc, argv);
	}catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}