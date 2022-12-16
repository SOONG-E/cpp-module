/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 14:25:55 by yujelee           #+#    #+#             */
/*   Updated: 2022/12/16 16:18:34 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <stdexcept>

Bureaucrat::Bureaucrat() : _name("unknown"), _grade(150){}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name), _grade(150){
	setGrade(grade);
}

Bureaucrat::Bureaucrat(Bureaucrat &obj) : Bureaucrat(obj.getName(), obj.getGrade()){}

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
			throw std::out_of_range("Bureaucrat::GradeTooHighException");
		else if (grade > 150)
			throw std::out_of_range("Bureaucrat::GradeTooLowException");
		_grade = grade;
	}
	catch (std::out_of_range& e){
		std::cout << e.what() << std::endl;
	}
}

std::ostream& operator <<(std::ostream& outputStream, const Bureaucrat& obj){
	std::cout << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".";
	
	return outputStream;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat &obj){
	_grade = obj.getGrade();

	return (*this);
}
