/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 19:17:23 by yujelee           #+#    #+#             */
/*   Updated: 2023/01/04 16:21:41 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float size_triangle(Point a, Point b, Point c){
	float size = (0.5 * (((a.getX() * b.getY()) + b.getX() * c.getY() + c.getX() * a.getY()) - (b.getX() * a.getY() + c.getX() * b.getY() + a.getX() * c.getY())));
	return (size > 0 ? size : -size);
}

bool bsp(Point const a, Point const b, Point const c, Point const point){
	float size_abc = size_triangle(a, b, c);
	float size_abp = size_triangle(a, b, point);
	float size_acp = size_triangle(a, c, point);
	float size_bcp = size_triangle(b, c, point);

	if (!size_abp || !size_acp || !size_bcp)
		return (false);
	if (size_abp + size_acp + size_bcp == size_abc)
		return (true);
	return (false);
}