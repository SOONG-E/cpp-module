/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 20:21:17 by yujelee           #+#    #+#             */
/*   Updated: 2022/12/07 21:29:20 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int  Fixed::getRawBits(void) const{
	std::cout << "getRawBits member function called" << std::endl;
	return (_fix);
}

void Fixed::setRawBits(int const raw){
	std::cout << "setRawBits member function called" << std::endl;
	_fix = raw;
}

Fixed::Fixed() : _fix(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &object){
	std::cout << "Copy constructor called" << std::endl;
	_fix = object.getRawBits();
}

Fixed& 	Fixed::operator=(const Fixed &object){
	std::cout << "Copy assignment operator called" << std::endl;
	_fix = object.getRawBits();
	return (*this);
}