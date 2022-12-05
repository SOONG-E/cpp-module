#include "Zombie.h"

void	yelling(Zombie *temp)
{
	temp->announce();
}

int main(){
	Zombie *a = newZombie("abc");
	a->announce();

	Zombie b;
	b.setName("qwe");
	b.announce();

	randomChump("babo");

	yelling(a);
	yelling(&b);

	delete(a);
}