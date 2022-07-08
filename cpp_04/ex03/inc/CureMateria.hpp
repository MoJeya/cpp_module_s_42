/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CureMateria.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 11:35:30 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/07/08 14:14:45 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"
#include "ICharacter.hpp"

class CureMateria : public AMateria {
	
	private:
	
	public:
		CureMateria();
		AMateria* clone() const;
		void use(ICharacter& target);
		~CureMateria();

};