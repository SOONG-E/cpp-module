#include "Zombie.h"

void randomChump(std::string name){
	Zombie newone;
	newone.setName(name);
	newone.announce();
}