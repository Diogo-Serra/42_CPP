
NAME := phonebook
CC := c++
CFLAGS := -Wall -Wextra -Werror -std=c++98
SOURCES := phonebook.cpp run.cpp main.cpp
OBJS := $(SOURCES:%.cpp=%.o)


all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
