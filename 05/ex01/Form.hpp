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
		virtual const char* what() const throw();
	};

	class GradeTooLowException : public std::exception {
		virtual const char* what() const throw();
	};
};

std::ostream& operator <<(std::ostream& outputStream, const Form& obj);

#endif