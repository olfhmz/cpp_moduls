NAME = filterHarl

SRCS =	main.cpp\
		Harl.cpp

OBJS = $(SRCS:.cpp=.o)

FLAGS = -O3 -Wall -Wextra -std=c++98

COMP = c++

.PHONY:			all clean fclean re

%.o: %.cpp		$(HDRS)
				$(COMP) $(FLAGS) -c $< -o $@

all:			$(NAME)

$(NAME):		$(OBJS)
				$(COMP) $(FLAGS) $(OBJS) -o $@

clean:
				rm -f $(OBJS)

fclean:			clean
				rm -f $(NAME)

re:				fclean all
