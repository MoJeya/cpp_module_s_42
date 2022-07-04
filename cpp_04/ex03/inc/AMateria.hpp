/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 17:48:58 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/07/04 20:03:35 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "ICharacter.hpp"

class AMateria{
	protected:
		std::string _mType;
	public:
		AMateria();
		explicit AMateria(std::string const & type);
		AMateria(AMateria &Am);
		const AMateria& operator=(AMateria &Am);
		std::string const & getType() const; //returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
		virtual ~AMateria();

};