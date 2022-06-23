/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 20:07:51 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/06/23 13:23:50 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main(int argc, char *argv[])
{
    std::string option;
    int i;

    
    i = 0;

    if (argc == 1)
    {
        PhoneBook Book;
        Book.printOptions();
        std::cout << "\033[34m\nOPTION: \033[0m";
               
        while (std::getline(std::cin, option))
        {
            if (option == "ADD")
            {
                Book.add(i);
                if (i == 8)
                    i = 0;
                if (Book.checkInput(i) == 1)
                {
                    Book.display();
                    Book.printOptions();
                    i++;
                }
            }
            else if (option == "SEARCH")
                Book.search();
            else if (option == "EXIT")
            {
                return(1);
            }
            else
                std::cout << "\033[31mthe input is invalid!\033[0m" << '\n';
        }
    }else
        std::cout << "\033[31mERROR: TO MANY ARGUMENTS\033[0m\n" << std::endl;
    (void) argv;
    return (0);
}
