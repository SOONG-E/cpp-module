/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:31:44 by yujelee           #+#    #+#             */
/*   Updated: 2023/01/03 19:50:04 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
	public : 
		WrongAnimal();
		WrongAnimal(WrongAnimal& obj);
		WrongAnimal& operator=(WrongAnimal& obj);
		virtual ~WrongAnimal();
		void makeSound() const;
		std::string getType() const;

	protected : 
		std::string type;

};

#endif