/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 16:01:24 by yujelee           #+#    #+#             */
/*   Updated: 2023/01/12 21:54:45 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <fstream>
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm() : AForm(){}

RobotomyRequestForm::RobotomyRequestForm(std::string name) \
: AForm(name, 72, 45){}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &obj) \
: AForm(obj.getName(), obj.getSignGrade(), obj.getExecuteGrade()){}

RobotomyRequestForm::~RobotomyRequestForm(){}

void RobotomyRequestForm::construct() const{
	std::cout << " dd,d,d,,,d,dd,,,,,r,r,,d,ddd,,,,d,d,d,,,,,ddd,d,d,,,,d,d,d,,r,rr,,d,d,r,d,dd,r" << std::endl;
	srand (time(NULL));
	if (rand() % 2)	{
		std::cout << getName() << " has been robotomized successfully" << std::endl;
		return ;
	}
	std::cout << getName() << " : robotomy failed" << std::endl;
}

bool RobotomyRequestForm::execute(Bureaucrat const & executor) const{
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

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm &obj){
	(void)obj;
	return (*this);
}