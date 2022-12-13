/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:31:44 by yujelee           #+#    #+#             */
/*   Updated: 2022/12/14 07:47:02 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
	public : 
		Animal();
		Animal(Animal& obj);
		Animal& operator=(Animal& obj);
		virtual ~Animal();
		virtual void makeSound() const = 0;
		std::string getType() const;

	protected : 
		std::string type;

};

#endif