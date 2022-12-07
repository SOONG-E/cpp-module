#include <iostream>

class Harl {
	public :
		void complain(std::string level);
		Harl();

	private :
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);

		std::string levels[4];
};