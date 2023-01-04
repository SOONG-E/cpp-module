/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:42:58 by yujelee           #+#    #+#             */
/*   Updated: 2023/01/04 16:50:35 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main(){

	Animal* k[4] = {new Dog, new Dog, new Cat, new Cat};

	for (int i = 0; i < 4; ++i)
		k[i]->makeSound();

	Dog *i = new Dog();
	Dog *j = new Dog(*i);

	j->setBrainCell("sleeping");
	std::cout << i->getBrainCell() << std::endl;
	std::cout << j->getBrainCell() << std::endl;
	
	for (int i = 0; i < 4; ++i)
		delete k[i];

	return 0;
}