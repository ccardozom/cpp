NAME = zombie

INCLUDE = -I.
SRCS = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
OBJ = $(SRCS:.cpp=.o)

CXXFLAGS = -Wall -Werror -Wextra -std=c++98
CXX = clang++
RM = rm -f

all: $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAGS) $(INCLUDE) $^ -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re