/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 19:02:51 by yujelee           #+#    #+#             */
/*   Updated: 2022/12/22 19:02:52 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>

class Data{
	public :
		Data();
		Data(int val, std::string str);
		Data(Data &obj);
		Data& operator=(Data &obj);
		~Data();
		void setVal(int val);
		int getVal() const;
		void setStr(std::string val);
		std::string getStr() const;
		
	private :
		int _val;
		std::string	_str;


};

#endif