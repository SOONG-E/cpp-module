CC = c++
CFLAGS = -Wall -Wextra -Werror -MMD -MP -std=c++98

SRCS =	main.cpp		\
		Zombie.cpp		\
		newZombie.cpp	\
		randomChump.cpp

OBJS = $(SRCS:.cpp=.o)

all : Zombie

Zombie : $(OBJS)

clean : 
	@$(RM) $(OBJS)

fclean : clean
	@$(RM) Zombie

re : fclean
	$(MAKE) all

PHONY : all clean fclean re
