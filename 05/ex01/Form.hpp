/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 13:30:31 by yujelee           #+#    #+#             */
/*   Updated: 2023/01/11 14:56:16 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	public :
		Form();
		Form(std::string name, int signGrade, int executeGrade);
		Form(Form &obj);
		~Form();
		std::string	getName() const;
		int			getSignGrade() const;
		int			getExecuteGrade() const;
		bool		getIsSigned() const;
		void		checkGrade(int grade);
		void		beSigned(Bureaucrat &bureaucrat);

	private :
		const std::string	_name;
		const int			_signGrade;
		const int			_executeGrade;
		bool				_isSigned;

		Form& operator=(Form &obj);
	
	class GradeTooHighException : public std::exception {
		const char* what() const throw();
	};

	class GradeTooLowException : public std::exception {
		const char* what() const throw();
	};
};

std::ostream& operator <<(std::ostream& outputStream, const Form& obj);

#endif