/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:42:58 by yujelee           #+#    #+#             */
/*   Updated: 2023/01/03 16:20:38 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main(){
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	j->makeSound();
	i->makeSound();
	delete j;
	delete i;

	Animal* k[2];

	k[0] = new Dog();
	k[1] = new Cat();

	k[0]->makeSound();
	k[1]->makeSound();
	
	delete k[0];
	delete k[1];

	Animal *l = new Animal[2];

	Dog dog;
	Cat cat;
	l[0] = dog;
	l[1] = cat;

	l[0].makeSound();
	l[1].makeSound();
	std::cout << l[0].getType() << std::endl;
	std::cout << l[1].getType() << std::endl;

	delete [] l;

	return 0;
}