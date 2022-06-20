/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 15:09:35 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/06/20 13:20:31 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rewrite.hpp"

int main()
{
    std::string s1 = "Now";
    std::string s2 = "later";
    std::string path = "./test.txt";
    
    reWrite r = reWrite(path, s1, s2);
    r.copyContent();
    return (0);
}