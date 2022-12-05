CC = c++
CFLAGS = -Wall -Wextra -Werror -MMD -MP -std=c++98

SRCS =	

OBJS = $(SRCS:.cpp=.o)

all : account

account : $(OBJS)

clean : 
	@$(RM) $(OBJS)

fclean : clean
	@$(RM) account

re : fclean
	$(MAKE) all

PHONY : all clean fclean re
