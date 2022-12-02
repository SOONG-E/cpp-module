CC = c++
CFLAGS = -Wall -Wextra -Werror -MMD -MP -std=c++98

SRCS =	phoneBook.cpp	\
		contact.cpp		\
		utils.cpp		\
		main.cpp

OBJS = $(SRCS:.cpp=.o)

all : phoneBook

phoneBook : $(OBJS)

clean : 
	@$(RM) $(OBJS)

fclean : clean
	@$(RM) phoneBook

re : fclean
	$(MAKE) all

PHONY : all clean fclean re
