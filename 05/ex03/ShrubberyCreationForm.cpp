/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 15:08:42 by yujelee           #+#    #+#             */
/*   Updated: 2022/12/19 16:03:47 by yujelee          ###   ########seoul.kr  */
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

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm &obj){
	(void)obj;
	return (*this);
}
