/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 14:05:16 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/07/10 20:10:01 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Form.hpp"

class PresidentialPardonForm : public Form{

	private:
		std::string _target;
	
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm &pr);
		PresidentialPardonForm& operator=(PresidentialPardonForm &pr);
		
		void action() const;
		void execute(Bureaucrat const &executor) const;
		~PresidentialPardonForm();
};