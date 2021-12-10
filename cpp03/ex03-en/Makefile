NAME = DiamondTrap

SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp
INCLUDE = -I.
OBJS = $(SRCS:.cpp=.o)
CXX = clang++
CXXFLAGS = -Werror -Wextra -Wall -std=c++98  -Wshadow -Wno-shadow $(INCLUDE)
RM = rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@ 

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: re clean fclean all