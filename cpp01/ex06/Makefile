NAME = karenFilter

SRCS = main.cpp Karen.cpp
OBJS = $(SRCS:.cpp=.o)
INCLUDE = -I.
CXXFLAGS = -Wall -Werror -Wextra -std=c++98
CXX = clang++
RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(INCLUDE) $^ -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re