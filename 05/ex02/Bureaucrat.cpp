/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 14:25:55 by yujelee           #+#    #+#             */
/*   Updated: 2023/01/11 16:52:38 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <stdexcept>

Bureaucrat::Bureaucrat() : _name("unknown"), _grade(1){}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name), _grade(1){
	setGrade(grade);
}

Bureaucrat::Bureaucrat(Bureaucrat &obj) : _name(obj.getName()), _grade(obj.getGrade()){}

Bureaucrat::~Bureaucrat(){}

void Bureaucrat::incrementGrade(){
	setGrade(getGrade() - 1);
}

void Bureaucrat::decrementGrade(){
	setGrade(getGrade() + 1);
}

std::string	Bureaucrat::getName() const{
	return (_name);
}

int Bureaucrat::getGrade() const{
	return (_grade);
}

void Bureaucrat::setGrade(int grade){
	try{
		if (grade < 1)
			throw GradeTooHighException();
		else if (grade > 150)
			throw GradeTooLowException();
		_grade = grade;
	}
	catch (std::out_of_range& e){
		std::cout << e.what() << std::endl;
	}
}

void Bureaucrat::signForm(AForm &form){
	try{
		form.beSigned(*this);
		if (form.getIsSigned()){
			std::cout << _name << " signed " << form.getName() << std::endl;
			return ;
		}
	}
	catch (std::exception& e){
		std::cout << _name << " couldn't sign " << form.getName() << " because " << e.what() <<std::endl;	
	}
}

void Bureaucrat::executeForm(AForm const & form){
	try{
		if (form.execute(*this)){
			std::cout << _name << " executed " << form.getName() << std::endl;
			return ;
		}
	}
	catch (std::exception& e){
		std::cout << _name << " couldn't executed " << form.getName() << " because " << e.what() <<std::endl;	
	}
}

const char* Bureaucrat::GradeTooHighException::what() const throw(){
	return ("Grade is too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
	return ("Grade is too low");
}

std::ostream& operator <<(std::ostream& outputStream, const Bureaucrat& obj){
	std::cout << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".";
	
	return outputStream;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat &obj){
	_grade = obj.getGrade();

	return (*this);
}
