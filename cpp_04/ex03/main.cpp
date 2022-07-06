/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 09:55:11 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/07/06 18:55:14 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./inc/AMateria.hpp"
#include "./inc/IceMateria.hpp"
#include "./inc/ICharacter.hpp"
#include "./inc/Character.hpp"
#include "./inc/IMateriaSource.hpp"
#include "./inc/MateriaSource.hpp"

int main (void)
{

	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new IceMateria());
	src->learnMateria(new IceMateria());
	ICharacter* me = new Character("me");
	ICharacter* bob = new Character("bob");
	AMateria* tmp;
	AMateria* tmp2;
	
	tmp = src->createMateria("ice");
	tmp2 = src->createMateria("ice");
	me->equip(tmp);
	me->equip(tmp2);
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	return 0;
}