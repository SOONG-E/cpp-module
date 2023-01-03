/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 16:38:40 by yujelee           #+#    #+#             */
/*   Updated: 2023/01/03 12:35:46 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "String.hpp"

int main(int ac, char **av)
{
	if (ac != 4)
		return (1);
	std::string filename(av[1]);
	std::string s1(av[2]);
	std::string s2(av[3]);
	std::string temp;

	std::ifstream fin(filename);
	std::ofstream fout(filename + ".replace");

	if (fin.is_open() == false || fout.is_open() == false)
		return (1);
	while (fin.eof()== false){
		std::getline(fin, temp);
		String	str(temp);
		str.replace(s1, s2);
		fout << str.getString() << std::endl;
	}
	fin.close();
	fout.close();
}
