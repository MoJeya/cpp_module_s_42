/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 18:34:01 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/07/19 14:12:28 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template<typename t>
class Array{
	
	private:
		unsigned int count;
		t *ar;
	public:
	
		Array() : count(0), ar(NULL){
		}
		
		Array(unsigned int len) : count(len), ar(new t[len]){
		}
		
		Array(Array &a)
		{
			*this = a;
		}

		Array& operator=(Array& a){
			if (this != &a)
			{
				this->count = a.count;
				this->ar = new Array(*a.count);
				for(unsigned int i = 0; i < count; i++)
				{
					this->ar[i] = a.ar[i];
				}
			}
		}

		unsigned int getSize(){return count;}
				
		class OutOfBound : public std::exception{
			const char * what() const throw () {
				return "\033[31m Out of Bound\033[0m";
			}
		};

		t& operator[](unsigned int index)
		{
			if (index >= count)
				throw OutOfBound();
			return ar[index];			 
		}
};