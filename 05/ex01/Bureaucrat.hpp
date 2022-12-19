/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 14:25:58 by yujelee           #+#    #+#             */
/*   Updated: 2022/12/19 13:15:08 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat {
	public :
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat &obj);
		~Bureaucrat();
		void	incrementGrade();
		void	decrementGrade();
		std::string	getName() const;
		int			getGrade() const;
		void		setGrade(int grade);
		void		signForm(Form &form);

	protected : 
		const std::string	_name;
		int					_grade;

	private :
		Bureaucrat& operator=(Bureaucrat &obj);

	class GradeTooHighException : public std::exception {
		virtual const char* what() const throw();
	};

	class GradeTooLowException : public std::exception {
		virtual const char* what() const throw();
	};
};

std::ostream& operator <<(std::ostream& outputStream, const Bureaucrat& obj);

#endif