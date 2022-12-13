/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:40:09 by yujelee           #+#    #+#             */
/*   Updated: 2022/12/13 18:55:50 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

void	Dog::makeSound() const{
	std::cout << "meong!" << std::endl;
}

Dog::Dog(){
	std::cout << "create Dog" << std::endl;
	type = "dog";
}

Dog::Dog(Dog& obj){
	std::cout << "create Dog" << std::endl;
	type = obj.type;
}

Dog& Dog::operator=(Dog& obj){
	type = obj.type;

	return (*this);
}

Dog::~Dog(){
	std::cout << "destroy Dog" << std::endl;
}