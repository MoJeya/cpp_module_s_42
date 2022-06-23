/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 12:26:48 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/06/23 12:26:50 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
    int i;
    std::string out;
    std::string input;

    i = 1;
    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    else
    {
        while(argv[i])
        {
            input = argv[i];
            for(int j = 0; j < static_cast<int>(input.length()); j++)
            {
                char c = input.at(j);
                out.append(sizeof(char), std::toupper(c));
            }
            if (argv[i+1] != NULL)
                out.append(sizeof(char), ' ');
            i++;
        }
        if (out.empty())
            std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        else
            std::cout << out << std::endl;
    }
    return (0);
}