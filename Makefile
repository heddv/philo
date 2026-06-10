CC = cc
CFLAGS = -Wall -Wextra -Werror -g3

NAME = philo
SRCS =  main.c \
		parsing.c \
		init.c \

OBJS= $(SRCS:.c=.o)

HEADER = philo.h

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -I. -c $< -o $@
	
clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re