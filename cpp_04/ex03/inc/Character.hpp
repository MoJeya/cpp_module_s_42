/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 12:26:37 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/07/06 18:40:07 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "MateriaSource.hpp"

class Character : public ICharacter{

	protected:
		std::string _name;
		MateriaSource mat;
	public:
		Character();
		Character(std::string const & name);
		Character(Character &CH);
		const Character& operator=(Character &CH);
		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
		virtual ~Character();
};