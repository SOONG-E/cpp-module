/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 15:36:56 by yujelee           #+#    #+#             */
/*   Updated: 2022/12/22 19:11:26 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t serialize(Data* ptr){
	uintptr_t ret = reinterpret_cast<uintptr_t>(ptr);

	return ret;
}
Data* deserialize(uintptr_t raw){
	Data *ret = reinterpret_cast<Data *>(raw);

	return (ret);
}

int main(){
	Data *test = new Data(34, "qwe");

	uintptr_t tptr = serialize(test);
	Data *tdata = deserialize(tptr);

	std::cout << tdata->getVal() << ", " << tdata->getStr() << std::endl;
	
	tdata->setVal(11);
	std::cout << test->getVal() << ", " << test->getStr() << std::endl;
	
	delete test;
}