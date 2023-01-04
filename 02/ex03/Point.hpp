/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 17:09:18 by yujelee           #+#    #+#             */
/*   Updated: 2023/01/04 16:15:50 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point{
	public :
		Point();
		Point(const float x, const float y);
		~Point();
		float getX() const;
		float getY() const;
		Point(const Point& obj);
		Point& operator=(const Point& obj);
		
	private :
		Fixed const x;
		Fixed const y;
		
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif