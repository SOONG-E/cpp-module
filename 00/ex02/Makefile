CC = c++
CFLAGS = -Wall -Wextra -Werror -MMD -MP -std=c++98

SRCS =	test.cpp	\
		Account.cpp

OBJS = $(SRCS:.cpp=.o)

all : Account

Account : $(OBJS)

clean : 
	@$(RM) $(OBJS)

fclean : clean
	@$(RM) Account

re : fclean
	$(MAKE) all

PHONY : all clean fclean re
