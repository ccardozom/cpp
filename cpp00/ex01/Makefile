NAME = phonebook

INCLUDE = -I.
SRCS = main.cpp
OBJ = $(SRCS:.cpp=.o)

CXXFLAGS = $(INC)
#-Wall -Wextra -Werror
CXX = clang++
RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(INCLUDE) $^ -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclea all

.PHONY: all clean fclean re
