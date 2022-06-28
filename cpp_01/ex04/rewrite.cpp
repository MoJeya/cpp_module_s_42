/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rewrite.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 13:23:50 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/06/28 18:29:16 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rewrite.hpp"

void sed::replace(std::string const &filePath, std::string s1, std::string s2)
{
    std::string line;
    char *sc1 = &s1[0];
    int len = s1.length();
    
    std::ifstream InFile(filePath);
    std::ofstream OutFile(filePath + ".replace" , std::ios::trunc);
    if (InFile && OutFile)
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
                OutFile << line << '\n';
            }
            std::cout << "Copy finished" << '\n';
        }
        else
            std::cout << "empty Argument!" << std::endl;
    }
    else
        std::cout << "unable to open file"<< '\n';
    InFile.close();
    OutFile.close();
}
