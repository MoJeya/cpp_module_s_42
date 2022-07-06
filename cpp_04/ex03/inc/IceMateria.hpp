/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IceMateria.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 18:05:10 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/07/06 16:56:23 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"
#include "ICharacter.hpp"

class IceMateria : public AMateria {

	private:

	public:
		IceMateria();
		IceMateria(IceMateria const & Ice);
		const IceMateria& operator=(IceMateria &);
		AMateria* clone() const;
		void use(ICharacter& target);
		~IceMateria();
};
