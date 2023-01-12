/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 15:08:42 by yujelee           #+#    #+#             */
/*   Updated: 2023/01/12 21:54:53 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm(){}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name) \
: AForm(name, 145, 137){}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &obj) \
: AForm(obj.getName(), obj.getSignGrade(), obj.getExecuteGrade()){}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

void ShrubberyCreationForm::construct() const{
	std::ofstream fout(getName() + "_shrubbery");
	if (fout.is_open() == false)
		return ;
	for (int i = 1; i < 10; ++i){
		for (int j = 10 - i; j > 0 ; --j)
			fout << " ";
		for (int k = 0; k < (i * 2 - 1); ++k)
			fout << "*";
		fout << std::endl;
	}
	fout << "        ||" <<std::endl;
	fout << "        ||" <<std::endl;
} 

bool ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
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


ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm &obj){
	(void)obj;
	return (*this);
}
