/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 20:07:51 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/04/30 19:33:26 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main(int argc, char *argv[])
{
    PhoneBook Book;
    std::string option;
    int i;

    i = 0;
    while (1)
    {
        std::cout << "\033[34m\nOPTION: \033[0m";
        getline(std::cin, option);
        if (option == "add")
        {
            std::cout << "index: " << i << '\n';
            Book.add(i);
            if (i == 7 )
                i = 0;
            if (Book.checkInput(i) == 1)
            {
                Book.display();
                i++;
            }
        }
        else if (option == "search")
            Book.search();
        else if (option == "exit")
        {
            exit(1);
        }
        else
            std::cout << "\033[31mthe input is invalid!\033[0m" << '\n';
    }
    (void) argc;
    (void) argv;


    return (0);
    
}
