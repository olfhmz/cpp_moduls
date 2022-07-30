NAME = bure

SRCS =	main.cpp\
		Bureaucrat.cpp

HDRS =	Bureaucrat.hpp

OBJS = $(SRCS:.cpp=.o)

FLAGS = -Wall -Werror -Wextra -std=c++98

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
