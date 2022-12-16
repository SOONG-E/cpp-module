/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 20:20:47 by yujelee           #+#    #+#             */
/*   Updated: 2022/12/16 14:37:06 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {
	public :
		int 	getRawBits(void) const;
		void 	setRawBits(int const raw);
		float	toFloat(void) const;
		int 	toInt(void) const;
		
		Fixed();
		Fixed(const int integer);
		Fixed(const float floatingNum);
		~Fixed();
		Fixed(const Fixed &object);
		Fixed& operator=(const Fixed &object);
		bool operator>(const Fixed &object) const ;
		bool operator<(const Fixed &object) const ;
		bool operator>=(const Fixed &object) const ;
		bool operator<=(const Fixed &object) const ;
		bool operator==(const Fixed &object) const ;
		bool operator!=(const Fixed &object) const ;
		Fixed operator+(const Fixed &object) const ;
		Fixed operator-(const Fixed &object) const ;
		Fixed operator*(const Fixed &object) const ;
		Fixed operator/(const Fixed &object) const ;
		Fixed& operator++();
		Fixed& operator--();
		Fixed operator++(int);
		Fixed operator--(int);
		
		static Fixed& max(Fixed &obj1, Fixed &obj2);
		static Fixed& min(Fixed &obj1, Fixed &obj2);
		static const Fixed& max(const Fixed &obj1, const Fixed &obj2);
		static const Fixed& min(const Fixed &obj1, const Fixed &obj2);

	private :
		int _fixed;
		static const int _fraction = 8;	
};

std::ostream& operator <<(std::ostream& outputStream, const Fixed& obj);

#endif
