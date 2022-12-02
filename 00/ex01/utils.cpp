#include "phoneBook.h"

std::string to_up(std::string str)
{
	std::string ret;

	for (std::string::iterator it=str.begin(); it!=str.end(); ++it)
		ret+= std::toupper(*it);
	return (ret);
}

int is_all_digit(std::string str)
{
	for (std::string::iterator it=str.begin(); it!=str.end(); ++it){
		if (!isdigit(*it))
			return (1);
	}
	return (0);
}

int	check_stream()
{
	if (std::cin.eof())
		exit(1);
	return (0);
}