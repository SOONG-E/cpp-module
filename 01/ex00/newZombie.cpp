#include "Zombie.h"

Zombie* newZombie(std::string name){
	Zombie* ret =  new Zombie();
	ret->setName(name);
	return (ret);
}