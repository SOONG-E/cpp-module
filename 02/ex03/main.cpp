/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 21:32:21 by yujelee           #+#    #+#             */
/*   Updated: 2023/01/03 21:41:56 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void ) {
	Point const A(2, 2);
    Point const B(0, -4);
    Point const C(-3, 0);
    Point const P(1, 3);
    
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
