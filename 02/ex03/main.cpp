/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 21:32:21 by yujelee           #+#    #+#             */
/*   Updated: 2022/12/09 19:18:29 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

std::ostream& operator <<(std::ostream& outputStream, const Fixed& obj){
	if ((obj.getRawBits() & 0xff) > 0){
		std::cout << obj.toFloat();
		
		return outputStream;
	}
	std::cout << obj.toInt();
	return outputStream;
}

int main( void ) {
	Point A(2, 2);
    Point B(0, -4);
    Point C(-3, 0);
    Point P(1, 3);
	
    bsp(A, B, C, P) ? std::cout << "inside" : std::cout << "outside";
    std::cout << std::endl;
	
    Point P2;
    bsp(A, B, C, P2) ? std::cout << "inside" : std::cout << "outside";
    std::cout << std::endl;
	
    Point P3(-1.5f, 0);
    bsp(A, B, C, P3) ? std::cout << "inside" : std::cout << "outside";
    std::cout << std::endl;
	
    Point P4(2, 2);
    bsp(A, B, C, P4) ? std::cout << "inside" : std::cout << "outside";
    std::cout << std::endl;
}
