/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 17:18:23 by yujelee           #+#    #+#             */
/*   Updated: 2022/12/09 19:07:36 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float Point::getX(){
	return (x.toFloat());
}

float Point::getY(){
	return (y.toFloat());
}

Point::Point() : x(Fixed(0)), y(Fixed(0)) {};

Point::Point(const Fixed x, const Fixed y) :x(x), y(y){};

Point::Point(const Point& obj){
	x.setRawBits(obj.x.getRawBits());
	y.setRawBits(obj.y.getRawBits());
}

Point& Point::operator=(const Point& obj){
	x.setRawBits(obj.x.getRawBits());
	y.setRawBits(obj.y.getRawBits());

	return (*this);
}

Point::~Point() {};