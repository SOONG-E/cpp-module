/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 14:39:49 by yujelee           #+#    #+#             */
/*   Updated: 2022/12/16 16:35:38 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(){
	Bureaucrat a("jelee", 75);

	Form x("X house", 170, 80);
	Form xx("XX house", 78, 170);
	Form b("B house", 70, 80);
	Form c("C house", 80, 80);

	a.signForm(x);
	a.signForm(xx);
	a.signForm(b);
	a.signForm(c);
}