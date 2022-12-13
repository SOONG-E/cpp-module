/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:34:02 by yujelee           #+#    #+#             */
/*   Updated: 2022/12/14 07:47:08 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

std::string Animal::getType() const {
	return (type);
}

void Animal::makeSound() const {
	std::cout << "haha!" << std::endl;
}

Animal::Animal(): type("hey"){
	std::cout << "create Animal" << std::endl;
}

Animal::Animal(Animal& obj){
	std::cout << "create Animal" << std::endl;
	type = obj.type;
}

Animal& Animal::operator=(Animal& obj){
	type = obj.type;

	return (*this);
}

Animal::~Animal(){
	std::cout << "destroy Animal" << std::endl;
}
