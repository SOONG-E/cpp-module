#include <iostream>
#include <cctype>
#include <cmath>
#include <sstream>

bool print_specific(float f){
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << f << std::endl;
	std::cout << "double: " << static_cast<double>(f) << std::endl;

	return (true);
}


bool is_impossible(float f){
	if (isinf(f))
		return (print_specific(f));
	if (isnan(f))
		return (print_specific(f));
	return (false);
}

void	make_conversion(float f){
	char c = static_cast<char>(f);

	if (isprint(c))
		std::cout << "char: " << c << std::endl;
	else if (isascii(c))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: impossible" << std::endl;
	std::cout << "int: " <<  static_cast<int>(f) << std::endl;
	std::cout << "float: " <<  static_cast<float>(f) << std::endl;
	std::cout << "double: " <<  static_cast<double>(f) << std::endl;

}

int main(int ac, char **av){
	if (ac == 1)
		return (0);

	std::string str(av[1]);

	float f = std::strtof(av[1], NULL);
	if (is_impossible(f))
		return (0);
	make_conversion(f);
}