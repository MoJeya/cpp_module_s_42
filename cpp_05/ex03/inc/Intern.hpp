/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 12:11:58 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/07/11 14:18:44 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

class Intern : public Bureaucrat{
		
	public:
		Intern();
		~Intern();
		Form *makeForm(std::string formName, std::string target);
		
		class NoForm : public std::exception {
			const char * what() const throw () {
				return "\033[31m Form doesnt exist\033[0m";
			}
		};
};