
NAME := PhoneBook
CC := c++
CFLAGS := -Wall -Wextra -Werror -std=c++98
SOURCES := phonebook.cpp


all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

$(OBJS): $(SOURCES)
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
