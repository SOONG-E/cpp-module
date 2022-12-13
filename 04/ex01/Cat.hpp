/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:36:35 by yujelee           #+#    #+#             */
/*   Updated: 2022/12/13 19:04:30 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
	public : 
		Cat();
		Cat(Cat& obj);
		Cat& operator=(Cat& obj);
		~Cat();
		void makeSound() const;
	
	private : 
		Brain *brain;
};

#endif