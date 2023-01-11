/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 13:30:33 by yujelee           #+#    #+#             */
/*   Updated: 2023/01/11 15:10:30 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("unknown"), _signGrade(0), _executeGrade(0), _isSigned(false){}

Form::Form(std::string name, int signGrade, int executeGrade): _name(name), _signGrade(1 <= signGrade && signGrade <= 150 ? signGrade : 0),\
 _executeGrade(1 <= executeGrade && executeGrade <= 150 ? executeGrade : 0), _isSigned(false)
 {
	checkGrade(signGrade);
	checkGrade(executeGrade);
 }

Form::Form(Form &obj) : _name(obj.getName()), _signGrade(obj.getSignGrade()), _executeGrade(obj.getExecuteGrade()), _isSigned(false){}

Form::~Form(){}

void Form::beSigned(Bureaucrat &bureaucrat){
	if (_signGrade == 0 || _executeGrade == 0){
		std::cout << "rewrite form! " << std::endl;
		return ;
	}
	if (bureaucrat.getGrade() > _signGrade)
		throw GradeTooLowException();
	_isSigned = true;
}

std::string	Form::getName() const{
	return (_name);
}

int Form::getSignGrade() const{
	return (_signGrade);
}

int Form::getExecuteGrade() const{
	return (_executeGrade);
}

bool Form::getIsSigned() const{
	return (_isSigned);
}

void Form::checkGrade(int grade){
	try{
		if (grade < 1)
			throw GradeTooHighException();
		else if (grade > 150)
			throw GradeTooLowException();
	}
	catch (std::exception& e){
		std::cout << e.what() << std::endl;
	}
}

const char* Form::GradeTooHighException::what() const throw(){
	return ("Grade is too high");
}

const char* Form::GradeTooLowException::what() const throw(){
	return ("Grade is too low");
}

std::ostream& operator <<(std::ostream& outputStream, const Form& obj){
	std::cout << "name : " <<obj.getName();
	std::cout << "grade required to sign : " << obj.getSignGrade();
	std::cout << "grade required to execute : " << obj.getExecuteGrade();
	std::cout << "signed : " << obj.getIsSigned();
	
	return outputStream;
}


Form& Form::operator=(Form &obj){
	_isSigned = obj.getIsSigned();

	return (*this);
}
