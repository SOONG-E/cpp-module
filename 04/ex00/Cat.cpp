/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:38:26 by yujelee           #+#    #+#             */
/*   Updated: 2022/12/13 18:56:01 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

void	Cat::makeSound() const{
	std::cout << "myao~" << std::endl;
}

Cat::Cat(){
	std::cout << "create Cat" << std::endl;
	type = "cat";
}

Cat::Cat(Cat& obj){
	std::cout << "create Cat" << std::endl;
	type = obj.type;
}

Cat& Cat::operator=(Cat& obj){
	type = obj.type;

	return (*this);
}

Cat::~Cat(){
	std::cout << "destroy Cat" << std::endl;
}