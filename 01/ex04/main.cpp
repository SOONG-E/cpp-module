/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 16:38:40 by yujelee           #+#    #+#             */
/*   Updated: 2022/12/07 16:38:41 by yujelee          ###   ########seoul.kr  */
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

	if (!fin.is_open() || !fout.is_open())
		return (1);
	while (!fin.eof()){
		std::getline(fin, temp);
		String	str(temp);
		str.replace(s1, s2);
		fout << str.getString() << std::endl;
	}
}
