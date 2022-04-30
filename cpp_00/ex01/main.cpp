/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 20:07:51 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/04/28 18:50:22 by mjeyavat         ###   ########.fr       */
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
        std::cout << "\nOPTION: ";
        getline(std::cin, option);
        if (option == "add")
        {
            Book.add(i);
            if (i == 7)
                i = 0;
            i++;
        }
        else if (option == "search")
            Book.search();
        else if (option == "exit")
            exit(1);
        else
            std::cout << "the input is invalid!" << '\n';
    }
    (void) argc;
    (void) argv;


    return (0);
    
}
