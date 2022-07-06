/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 17:48:58 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/07/06 16:54:43 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class AMateria{
	protected:
		std::string _mType;
	public:
		AMateria();
		AMateria(std::string const & type);
		AMateria(AMateria &Am);
		const AMateria& operator=(AMateria &Am);
		std::string const & getType() const; //returns the materia type
		virtual AMateria* clone() const = 0;
		virtual ~AMateria();

};