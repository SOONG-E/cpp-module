/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:42:58 by yujelee           #+#    #+#             */
/*   Updated: 2023/01/03 19:49:30 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	{
		const Animal* animal = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		std::cout << j->getType() << std::endl;
		std::cout << i->getType() << std::endl;
		i->makeSound();
		j->makeSound();
		animal->makeSound();

		delete animal;
		delete i;
		delete j;
	}

	{
		const WrongAnimal* animal = new WrongAnimal();
		const WrongAnimal* i = new WrongCat();

		i->makeSound();
		animal->makeSound();

		delete animal;
		delete i;
		return 0;
	}
}