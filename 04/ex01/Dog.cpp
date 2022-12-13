/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:40:09 by yujelee           #+#    #+#             */
/*   Updated: 2022/12/13 19:14:48 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

void	Dog::makeSound() const{
	std::cout << "meong!" << std::endl;
}

Dog::Dog(){
	std::cout << "create Dog" << std::endl;
	brain = new Brain();
	type = "dog";
}

Dog::Dog(Dog& obj){
	std::cout << "create Dog" << std::endl;
	brain = new Brain();
	type = obj.type;
}

Dog& Dog::operator=(Dog& obj){
	brain = new Brain();
	type = obj.type;

	return (*this);
}

Dog::~Dog(){
	std::cout << "destroy Dog" << std::endl;
	delete brain;
}