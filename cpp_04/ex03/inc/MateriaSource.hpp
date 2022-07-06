/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 10:47:15 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/07/06 18:32:40 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource {
	
	protected:
		AMateria* _inventory[4];
	public:
		MateriaSource();
		virtual ~MateriaSource();
		MateriaSource(MateriaSource &m);
		virtual void dropFromInv(int idx);
		virtual std::string getMateriaType(int idx);
		const MateriaSource& operator=(MateriaSource &m);
		virtual void learnMateria(AMateria* m);
		virtual AMateria* createMateria(std::string const & type);
};