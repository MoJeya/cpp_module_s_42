/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 19:13:06 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/07/04 17:05:47 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Brain{

	private:
		std::string ideas[100];
	public:
		Brain( std::string ideas );
		Brain(Brain &b);
		Brain& operator=(Brain &b);
		std::string getIdeas( unsigned long index );
		void setIdeas(const std::string id);
		~Brain( void );
};