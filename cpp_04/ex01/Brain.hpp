/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 19:13:06 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/06/29 20:22:14 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Brain{

	private:
		std::string ideas[100];
	public:
		Brain( void );
		Brain(Brain &b);
		Brain& operator=(Brain &b);
		std::string getIdeas( void );
		void setIdeas(std::string id);
		~Brain( void );
};