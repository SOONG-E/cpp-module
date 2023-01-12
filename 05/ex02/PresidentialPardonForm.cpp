/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 15:24:10 by yujelee           #+#    #+#             */
/*   Updated: 2023/01/12 21:54:32 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <fstream>

PresidentialPardonForm::PresidentialPardonForm() : AForm(){}

PresidentialPardonForm::PresidentialPardonForm(std::string name) \
: AForm(name, 25, 5){}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &obj) \
: AForm(obj.getName(), obj.getSignGrade(), obj.getExecuteGrade()){}

PresidentialPardonForm::~PresidentialPardonForm(){}

void PresidentialPardonForm::construct() const{
	std::cout << getName() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
} 

bool PresidentialPardonForm::execute(Bureaucrat const & executor) const{
	if (_signGrade == 0 || _executeGrade == 0){
		std::cout << "rewrite form! " << std::endl;
		return false;
	}
	if (_isSigned == false)
		throw GradeTooLowException();
	if (executor.getGrade() < _executeGrade)
		throw GradeTooLowException();
	construct();
	return (true);
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm &obj){
	(void)obj;
	return (*this);
}