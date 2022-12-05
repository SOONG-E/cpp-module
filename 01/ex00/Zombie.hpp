#include "Zombie.h"

class Zombie{

	private :
		std::string name;

	public :
		void		setName(std::string name);
		void 		announce(void);
		Zombie(){};
		~Zombie();
};