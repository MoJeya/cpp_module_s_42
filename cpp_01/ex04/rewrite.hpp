/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rewrite.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 13:24:01 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/06/28 13:24:07 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REWRITE_HPP
#define REWRITE_HPP

#include <iostream>
#include <fstream>
#include <string>

class sed
{
    private:
        
    public:
        static void replace(std::string const &filePath,  std::string s1, std::string s2);
        void copyContent();
};

#endif
