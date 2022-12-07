/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 20:21:17 by yujelee           #+#    #+#             */
/*   Updated: 2022/12/07 21:50:36 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(const int integer) : _integer(integer), _floatingNum(0){
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float floatingNum) :_integer(0), _floatingNum(floatingNum) {
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed() : _integer(0), _floatingNum(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &object){
	std::cout << "Copy constructor called" << std::endl;
	_integer = object._integer;
	_floatingNum = object._floatingNum;
}

Fixed& 	Fixed::operator=(const Fixed &object){
	std::cout << "Copy assignment operator called" << std::endl;
	_integer = object._integer;
	_floatingNum = object._floatingNum;
	return (*this);
}