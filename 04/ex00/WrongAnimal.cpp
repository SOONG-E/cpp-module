/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:34:02 by yujelee           #+#    #+#             */
/*   Updated: 2023/01/03 19:47:38 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

std::string WrongAnimal::getType() const {
	return (type);
}

void WrongAnimal::makeSound() const{
	std::cout << "haha!" << std::endl;
}

WrongAnimal::WrongAnimal(): type("hey"){
	std::cout << "create WrongAnimal" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal& obj){
	std::cout << "create WrongAnimal" << std::endl;
	type = obj.type;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal& obj){
	type = obj.type;

	return (*this);
}

WrongAnimal::~WrongAnimal(){
	std::cout << "destroy WrongAnimal" << std::endl;
}
