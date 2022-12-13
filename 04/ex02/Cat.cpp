/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:38:26 by yujelee           #+#    #+#             */
/*   Updated: 2022/12/14 07:47:13 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

void	Cat::makeSound() const{
	std::cout << "myao~" << std::endl;
}

Cat::Cat(){
	std::cout << "create Cat" << std::endl;
	brain = new Brain();
	type = "cat";
}

Cat::Cat(Cat& obj){
	std::cout << "create Cat" << std::endl;
	brain = new Brain();
	type = obj.type;
}

Cat& Cat::operator=(Cat& obj){
	brain = new Brain();
	type = obj.type;
	
	return (*this);
}

Cat::~Cat(){
	std::cout << "destroy Cat" << std::endl;
	delete brain;
}