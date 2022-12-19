/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 16:40:23 by yujelee           #+#    #+#             */
/*   Updated: 2022/12/19 16:40:24 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"

class Intern {
	public :
		Intern();
		Intern(Intern &obj);
		~Intern();
		Intern& operator=(Intern &obj);
		AForm* makeForm(std::string name, std::string target);

	private :
		std::string forms[3];
};

#endif