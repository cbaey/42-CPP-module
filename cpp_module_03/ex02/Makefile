NAME=FragTrap
SRCS=main.cpp ClapTrap.cpp FragTrap.cpp
OBJS=$(SRCS:.cpp=.o)
CXX=c++
CFLAGS=-Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CFLAGS) $(OBJS) -o $(NAME)

%.o:%.cpp
	$(CXX) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
