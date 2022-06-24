/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 16:48:18 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/06/24 16:52:20 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap{
	
	public:
		FragTrap();
		FragTrap(std::string name);
		
		FragTrap& operator=(FragTrap &cp);

		void highFivesGuys(void);
		
		~FragTrap();
};