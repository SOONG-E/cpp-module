/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 17:18:23 by yujelee           #+#    #+#             */
/*   Updated: 2022/12/09 17:23:12 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

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