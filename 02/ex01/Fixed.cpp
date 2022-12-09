/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 20:21:17 by yujelee           #+#    #+#             */
/*   Updated: 2022/12/09 15:24:53 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

float	Fixed::toFloat(void) const{
	return (float)(_fixed / 256.0);
}

int 	Fixed::toInt(void) const{
	return (_fixed >> 8);
}

int  Fixed::getRawBits(void) const{
	return (_fixed);
}

void Fixed::setRawBits(int const raw){
	_fixed = raw;
}

Fixed::Fixed(const int integer){
	std::cout << "Int constructor called" << std::endl;
	_fixed = (integer << 8);
}

Fixed::Fixed(const float floatingNum){
	std::cout << "Float constructor called" << std::endl;
	_fixed = roundf(floatingNum * 256);
}

Fixed::Fixed() : _fixed(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &object){
	std::cout << "Copy constructor called" << std::endl;
	_fixed = object.getRawBits();
}

Fixed& 	Fixed::operator=(const Fixed &object){
	std::cout << "Copy assignment operator called" << std::endl;
	_fixed = object.getRawBits();
	return (*this);
}
