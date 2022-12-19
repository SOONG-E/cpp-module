/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 16:01:24 by yujelee           #+#    #+#             */
/*   Updated: 2022/12/19 17:23:48 by yujelee          ###   ########seoul.kr  */
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

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm &obj){
	(void)obj;
	return (*this);
}