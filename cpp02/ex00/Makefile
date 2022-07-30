NAME = fix

SRCS =	main.cpp\
		Fixed.cpp

HDRS = Fixed.hpp

OBJS = $(SRCS:.cpp=.o)

FLAGS = -Wall -Wextra -Werror -std=c++98

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
