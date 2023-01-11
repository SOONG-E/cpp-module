/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 16:00:55 by yujelee           #+#    #+#             */
/*   Updated: 2023/01/11 16:41:25 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */


#include "AForm.hpp"

AForm::AForm() : _name("unknown"), _signGrade(0), _executeGrade(0), _isSigned(false){}

AForm::AForm(std::string name, int signGrade, int executeGrade): _name(name)
																, _signGrade(1 <= signGrade && signGrade <= 150 ? signGrade : 0)
																, _executeGrade(1 <= executeGrade && executeGrade <= 150 ? executeGrade : 0)\
																, _isSigned(false){
	checkGrade(signGrade);
	checkGrade(executeGrade);
}

AForm::AForm(AForm &obj) : _name(obj.getName())
							, _signGrade(obj.getSignGrade())
							, _executeGrade(obj.getExecuteGrade())
							, _isSigned(false){}

AForm::~AForm(){}

void AForm::beSigned(Bureaucrat &bureaucrat){
	if (_signGrade == 0 || _executeGrade == 0){
		std::cout << "rewrite form! " << std::endl;
		return ;
	}
	if (bureaucrat.getGrade() < _signGrade)
		throw GradeTooLowException();
	_isSigned = true;
}

bool AForm::execute(Bureaucrat const & executor) const{
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

std::string	AForm::getName() const{
	return (_name);
}

int AForm::getSignGrade() const{
	return (_signGrade);
}

int AForm::getExecuteGrade() const{
	return (_executeGrade);
}

bool AForm::getIsSigned() const{
	return (_isSigned);
}

void AForm::checkGrade(int grade){
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

const char* AForm::GradeTooHighException::what() const throw(){
	return ("Grade is too high");
}

const char* AForm::GradeTooLowException::what() const throw(){
	return ("Grade is too low");
}

std::ostream& operator <<(std::ostream& outputStream, const AForm& obj){
	std::cout << "name : " <<obj.getName();
	std::cout << "grade required to sign : " << obj.getSignGrade();
	std::cout << "grade required to execute : " << obj.getExecuteGrade();
	std::cout << "signed : " << obj.getIsSigned();
	
	return outputStream;
}


AForm& AForm::operator=(AForm &obj){
	_isSigned = obj.getIsSigned();

	return (*this);
}
