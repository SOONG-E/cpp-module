/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 16:40:21 by yujelee           #+#    #+#             */
/*   Updated: 2022/12/19 16:42:17 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern(){
	forms[0] = "shrubbery creation";
	forms[1] = "robotomy request";
	forms[2] = "presidential pardon";
}

Intern::Intern(Intern &obj){
	forms[0] = obj.forms[0];
	forms[1] = obj.forms[1];
	forms[2] = obj.forms[2];
}

Intern::~Intern(){}

Intern& Intern::operator=(Intern &obj){
	forms[0] = obj.forms[0];
	forms[1] = obj.forms[1];
	forms[2] = obj.forms[2];

	return (*this);
}

AForm* Intern::makeForm(std::string name, std::string target){
	int i;
	for (i = 0; i < 3; ++i){
		if (forms[i] == name)
			break;
	}
	switch (i) {
		case 0 :
			std::cout << "Intern creates " << name << " form" << std::endl;
			return (new ShrubberyCreationForm(target));
		case 1 : 
			std::cout << "Intern creates " << name << " form" << std::endl;
			return (new RobotomyRequestForm(target));
		case 2 :
			std::cout << "Intern creates " << name << " form" << std::endl;
			return (new PresidentialPardonForm(target));
		default :
			std::cout << "check form name" << std::endl;
	}
	return (NULL);
}
