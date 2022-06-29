/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rewrite.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 13:23:50 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/06/29 17:04:35 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rewrite.hpp"

bool checkIfSame(std::string s1, std::string s2)
{
    if (s1 == s2)
    {
        std::cout << "SAME WORRDS" << std::endl;
        return true;
    }
    return false;
}

void sed::replace(std::string const &filePath, std::string s1, std::string s2)
{
    std::string line;
    char *sc1 = &s1[0];
    int len = s1.length();
    
    std::ifstream InFile(filePath);
    std::ofstream OutFile(filePath + ".replace" , std::ios::trunc);
    if (!InFile.is_open() || !OutFile.is_open())
        std::cout << "ERROR: UNABLE TO OPEN FILE" << std::endl;
    else if (checkIfSame(s1, s2) == false)
    {
        if (len != 0)
        {
            std::string::size_type pos = 0;
            while (std::getline(InFile, line))
            {
                pos = line.find(s1);
                while (pos != std::string::npos)
                {
                    line.erase(pos, len);
                    line.insert(pos,s2);
                    pos = line.find(sc1, pos, len);
                }
                if (InFile.eof())
                    OutFile << line;
                else
                    OutFile << line << std::endl;
            }
            std::cout << "Copy finished" << '\n';
        }
        else
            std::cout << "empty Argument!" << std::endl;
    }        
    InFile.close();
    OutFile.close();
}
