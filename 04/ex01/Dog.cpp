/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:40:09 by yujelee           #+#    #+#             */
/*   Updated: 2023/01/13 15:25:00 by yujelee          ###   ########seoul.kr  */
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
	brain = new Brain();
	*brain = *obj.brain;
	type = obj.type;
	std::cout << "create Dog" << std::endl;
}

Dog& Dog::operator=(Dog& obj){
	*brain = *obj.brain;
	type = obj.type;

	return (*this);
}

Dog::~Dog(){
	std::cout << "destroy Dog" << std::endl;
	delete brain;
}

std::string		Dog::getBrainCell() const{
	return (brain->getBrainCell(0));
};

void	Dog::setBrainCell(std::string str){
	brain->setBrainCell(0, str);
}
