#include "phoneBook.h"

std::string to_up(std::string str)
{
	std::string ret;

	for (std::string::iterator it=str.begin(); it!=str.end(); ++it)
		ret+= std::toupper(*it);
	return (ret);
}