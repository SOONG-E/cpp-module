CC = c++
CFLAGS = -Wall -Wextra -Werror -MMD -MP -std=c++98

SRCS = 
OBJS = $(SRCS:.cpp=.o)

all : phonebook

phonebook : $(OBJS)

clean : 
	@$(RM) $(OBJS)

fclean : clean
	@$(RM) phonebook

re : fclean
	$(MAKE) all

PHONY : all clean fclean re