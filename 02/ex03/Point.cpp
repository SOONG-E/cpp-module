/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 17:18:23 by yujelee           #+#    #+#             */
/*   Updated: 2023/01/05 19:28:36 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float Point::getX() const {
	return (x.toFloat());
}

float Point::getY() const {
	return (y.toFloat());
}

Point::Point() : x(Fixed(0)), y(Fixed(0)) {};

Point::Point(const float x, const float y) :x(Fixed(x)), y(Fixed(y)){};

Point::Point(const Point& obj) : x(obj.x), y(obj.y){}

Point& Point::operator=(const Point& obj){
	*this = Point(obj);
	return (*this);
}

Point::~Point() {};