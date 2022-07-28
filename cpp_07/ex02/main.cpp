/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 09:43:00 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/07/27 18:13:16 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./inc/Array.hpp"

// int main(void)
// {
// 	std::cout << "\033[34mINT ARRAY\033[0m" << std::endl;
// 	try{
// 		Array<int>a(10);
// 		Array<int>test(a);
// 		std::cout << "size: " << a.getSize() << std::endl; 
// 		for(int i = 0; i < 10; i++)
// 		{
// 			a[i] = i;
// 			std::cout << "Value: " << a[i] << std::endl;
// 		}

// 		std::cout << "\033[34mFLOAT ARRAY\033[0m" << std::endl;
// 		Array<float>f(10);
// 		std::cout << "size: " << f.getSize() << std::endl;
// 		for(int i = 0; i < 10; i++)
// 		{
// 			f[i] = i+0.89f;
// 			std::cout << "Value: " << f[i] << std::endl;
// 		}

// 		std::cout << "\033[34mOut of Bound test\033[0m" << std::endl;
// 		for(unsigned int i = 0; i < 11; i++)
// 		{
// 			std::cout << "Value: " << f[i] << std::endl;
// 		}

// 	}catch(std::exception& e)
// 	{
// 		std::cout << e.what() << std::endl;
// 	}

// 	return(0);
// }

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> a;
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    // try
    // {
    //     numbers[-2] = 0;
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    // try
    // {
    //     numbers[MAX_VAL] = 0;
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }

    // for (int i = 0; i < MAX_VAL; i++)
    // {
    //     numbers[i] = rand();
    // }
    delete [] mirror;//
    return 0;
}