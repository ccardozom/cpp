NAME = brain

INCLUDE = -I.
SRCS = main.cpp Weapon.cpp HumanA.cpp
OBJS = $(SRCS:.cpp=.o)
CXXFLAGS = -Wall -Werror -Wextra -std=c++98
CXX = clang++
RM = rm -f

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) $(INCLUDE) $^ -o $@

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re