/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 20:21:17 by yujelee           #+#    #+#             */
/*   Updated: 2022/12/09 21:09:03 by yujelee          ###   ########seoul.kr  */
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
	_fixed = (integer << 8);
}

Fixed::Fixed(const float floatingNum){
	_fixed = roundf(floatingNum * 256);
}

Fixed::Fixed() : _fixed(0){}

Fixed::~Fixed(){}

Fixed::Fixed(const Fixed &object){
	_fixed = object.getRawBits();
}

Fixed& 	Fixed::operator=(const Fixed &object){
	_fixed = object.getRawBits();
	return (*this);
}

bool Fixed::operator>(const Fixed &object) const {
	return (_fixed > object.getRawBits());
}

bool Fixed::operator<(const Fixed &object) const {
	return (_fixed < object.getRawBits());
}

bool Fixed::operator>=(const Fixed &object) const {
	return (_fixed >= object.getRawBits());
}

bool Fixed::operator<=(const Fixed &object) const {
	return (_fixed >= object.getRawBits());
}

bool Fixed::operator==(const Fixed &object) const {
	return (_fixed == object.getRawBits());
}

bool Fixed::operator!=(const Fixed &object) const {
	return (_fixed != object.getRawBits());
}

Fixed Fixed::operator+(const Fixed &object) const {
	return (Fixed(toFloat() + object.toFloat()));
}

Fixed Fixed::operator-(const Fixed &object) const {
	return (Fixed(toFloat() - object.toFloat()));
}

Fixed Fixed::operator*(const Fixed &object) const {
	return (Fixed(toFloat() * object.toFloat()));
}

Fixed Fixed::operator/(const Fixed &object) const {
	return (Fixed(toFloat() / object.toFloat()));
}

Fixed& Fixed::operator++(){
	if ((_fixed & 0xff) > 0 || !_fixed){
		++_fixed;
		return (*this);
	}
	_fixed += 0x100;
	
	return *this;
}

Fixed& Fixed::operator--(){
	if ((_fixed & 0xff) > 0 || !_fixed){
		--_fixed;
		return (*this);
	}
	_fixed -= 0x100;
	
	return *this;
}

Fixed Fixed::operator++(int){
	Fixed temp(toFloat());
	
	if ((_fixed & 0xff) > 0 || !_fixed){
		++_fixed;
		return (temp);
	}
	_fixed += 0x100;
	
	return (temp);
}

Fixed Fixed::operator--(int){
	Fixed temp(toFloat());
	
	if ((_fixed & 0xff) > 0 || !_fixed){
		--_fixed;
		return (temp);
	}
	_fixed -= 0x100;
	
	return (temp);
}

Fixed& Fixed::max(Fixed &obj1, Fixed &obj2){
	return (obj1.getRawBits() > obj2.getRawBits() ? obj1 : obj2);
}

Fixed& Fixed::min(Fixed &obj1, Fixed &obj2){
	return (obj1.getRawBits() < obj2.getRawBits() ? obj1 : obj2);
}

const Fixed& Fixed::max(const Fixed &obj1, const Fixed &obj2){
	return (obj1.getRawBits() > obj2.getRawBits() ? obj1 : obj2);
}

const Fixed& Fixed::min(const Fixed &obj1, const Fixed &obj2){
	return (obj1.getRawBits() < obj2.getRawBits() ? obj1 : obj2);
}

