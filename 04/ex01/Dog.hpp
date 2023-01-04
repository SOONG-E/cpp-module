/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:39:51 by yujelee           #+#    #+#             */
/*   Updated: 2023/01/03 20:22:25 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
	public : 
		Dog();
		Dog(Dog& obj);
		Dog& operator=(Dog& obj);
		~Dog();
		void makeSound() const;
		std::string		getBrainCell() const;
		void			setBrainCell(std::string str);
		Brain *brain;

	private : 
};

#endif