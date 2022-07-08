/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 17:48:58 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/07/08 12:29:44 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class AMateria{
	protected:
		std::string _mType;
		AMateria();
	public:
		AMateria(std::string const & type);
		AMateria(AMateria &Am);
		AMateria& operator=(AMateria &Am);
		std::string const & getType() const; //returns the materia type
		virtual AMateria* clone() const = 0;
		virtual ~AMateria();

};