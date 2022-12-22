#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <ctime>

Base *generate(){
	srand(time(NULL));
	
	switch (rand() % 3){
		case 0:
			return (new A);
		case 1:
			return (new B);
		case 2:
			return (new C);
	}
	return (NULL);
}

void identify(Base* p){
	if (dynamic_cast<A *>(p))
		std::cout << "A" <<std::endl;
	if (dynamic_cast<B *>(p))
		std::cout << "B" <<std::endl;
	if (dynamic_cast<C *>(p))
		std::cout << "C" <<std::endl;
}

void identify(Base& p){
	try {
		A &a = dynamic_cast<A &>(p);
		std::cout << "A" <<std::endl;
		(void)a;
		return ;
	}
	catch(std::bad_cast){}
	try {
		B &b = dynamic_cast<B &>(p);
		std::cout << "B" <<std::endl;
		(void)b;
		return ;
	}
	catch(std::bad_cast){}
	try {
		C &c = dynamic_cast<C &>(p);
		std::cout << "C" <<std::endl;
		(void)c;
		return ;
	}
	catch(std::bad_cast){}

}

int main(){
	Base *test = generate();

	identify(test);
	identify(*test);
}