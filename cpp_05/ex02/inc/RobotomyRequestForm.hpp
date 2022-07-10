/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 14:58:37 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/07/10 20:11:02 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include "Form.hpp"

class RobotomyRequestForm : public Form{
	
	private:
		std::string _target;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm &rb);
		RobotomyRequestForm& operator=(RobotomyRequestForm &rb);
		
		void action() const;
		void execute(Bureaucrat const &executor) const;
		
		~RobotomyRequestForm();	
};