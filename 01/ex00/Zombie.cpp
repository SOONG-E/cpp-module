#include "Zombie.h"

void	Zombie::setName(std::string name){
	this->name = name;
}

void 	Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(){
	std::cout << "destroyed : " << name << std::endl;
}