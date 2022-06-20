/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 15:09:35 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/06/20 17:18:42 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rewrite.hpp"

int main(int argc, char **argv)
{
    if (argc == 4)
    {
        sed::replace(argv[1], argv[2], argv[3]);
    }
    else
        std::cout << "Arguments are missing!" << '\n';
    
    return (0);
}