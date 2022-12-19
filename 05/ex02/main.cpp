/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 14:39:49 by yujelee           #+#    #+#             */
/*   Updated: 2022/12/19 15:46:55 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(){
	Bureaucrat a("a", 2);
	Bureaucrat b("b", 30);
	Bureaucrat c("c", 150);

	ShrubberyCreationForm q("Q house");
	RobotomyRequestForm w("W home");
	PresidentialPardonForm e("E");


	std::cout << q.getSignGrade() << " " << q.getExecuteGrade() <<std::endl;
	std::cout << w.getSignGrade() << " " << w.getExecuteGrade() <<std::endl;
	std::cout << e.getSignGrade() << " " << e.getExecuteGrade() <<std::endl;
	
	a.signForm(q);
	a.signForm(w);
	a.signForm(e);

	a.executeForm(q);
	b.executeForm(q);
	c.executeForm(q);

	a.executeForm(w);
	b.executeForm(w);
	c.executeForm(w);
	
	a.executeForm(e);
	b.executeForm(e);
	c.executeForm(e);
	
}