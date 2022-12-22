/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 19:02:49 by yujelee           #+#    #+#             */
/*   Updated: 2022/12/22 19:02:50 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(){};

Data::Data(int val, std::string str): _val(val), _str(str){};

Data::Data(Data &obj) : _val(obj.getVal()), _str(obj.getStr()){};

Data& Data::operator=(Data &obj){
	_val = obj.getVal();
	_str = obj.getStr();

	return (*this);
};

Data::~Data() {};

void Data::setVal(int val){
	_val = val;
}

int Data::getVal() const{
	return (_val);
}

void Data::setStr(std::string str){
	_str = str;
}

std::string Data::getStr() const{
	return (_str);
}