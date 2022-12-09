/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 17:09:18 by yujelee           #+#    #+#             */
/*   Updated: 2022/12/09 19:18:41 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point{
	public :
		Point();
		Point(const Fixed x, const Fixed y);
		Point(const Point& obj);
		Point& operator=(const Point& obj);
		~Point();
		float getX();
		float getY();
		
	private :
		Fixed x;
		Fixed y;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif