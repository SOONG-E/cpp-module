/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 16:01:16 by yujelee           #+#    #+#             */
/*   Updated: 2022/12/19 16:01:17 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
	public :
		AForm();
		AForm(std::string name, int signGrade, int executeGrade);
		AForm(AForm &obj);
		virtual ~AForm();
		std::string	getName() const;
		int			getSignGrade() const;
		int			getExecuteGrade() const;
		bool		getIsSigned() const;
		void		checkGrade(int grade);
		void		beSigned(Bureaucrat &bureaucrat);
		bool		execute(Bureaucrat const & executor) const;
		virtual	void	construct() const = 0;

	private :
		const std::string	_name;
		const int			_signGrade;
		const int			_executeGrade;
		bool				_isSigned;

		AForm& operator=(AForm &obj);
	
	class GradeTooHighException : public std::exception {
		virtual const char* what() const throw();
	};

	class GradeTooLowException : public std::exception {
		virtual const char* what() const throw();
	};
};

std::ostream& operator <<(std::ostream& outputStream, const AForm& obj);

#endif