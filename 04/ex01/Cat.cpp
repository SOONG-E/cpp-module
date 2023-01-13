/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:38:26 by yujelee           #+#    #+#             */
/*   Updated: 2023/01/13 15:25:08 by yujelee          ###   ########seoul.kr  */
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
	brain = new Brain();
	*brain = *obj.brain;
	type = obj.type;
	std::cout << "create Cat" << std::endl;
}

Cat& Cat::operator=(Cat& obj){
	*brain = *obj.brain;
	type = obj.type;
	
	return (*this);
}

Cat::~Cat(){
	std::cout << "destroy Cat" << std::endl;
	delete brain;
}
