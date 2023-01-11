/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 14:39:49 by yujelee           #+#    #+#             */
/*   Updated: 2023/01/11 16:51:43 by yujelee          ###   ########seoul.kr  */
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

	std::cout << q <<std::endl;
	std::cout << w <<std::endl;
	std::cout << e <<std::endl <<std::endl;
	
	c.signForm(q);
	c.signForm(w);
	c.signForm(e);

	std::cout << q <<std::endl;
	std::cout << w <<std::endl;
	std::cout << e <<std::endl <<std::endl;

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