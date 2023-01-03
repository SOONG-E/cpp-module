/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:38:26 by yujelee           #+#    #+#             */
/*   Updated: 2023/01/03 19:47:50 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

void	WrongCat::makeSound() const{
	std::cout << "myao~" << std::endl;
}

WrongCat::WrongCat(){
	std::cout << "create WrongCat" << std::endl;
	type = "Wrongcat";
}

WrongCat::WrongCat(WrongCat& obj){
	std::cout << "create WrongCat" << std::endl;
	type = obj.type;
}

WrongCat& WrongCat::operator=(WrongCat& obj){
	type = obj.type;

	return (*this);
}

WrongCat::~WrongCat(){
	std::cout << "destroy WrongCat" << std::endl;
}