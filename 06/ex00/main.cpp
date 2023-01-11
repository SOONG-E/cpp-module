#include "Type.hpp"

int main(int ac, char **av){
	if (ac != 2)
		return (0);

	Type str(av[1]);
	str.makeConversion();
}
