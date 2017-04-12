NAME = libft.a

SRCS = ft_putchar.c \
		  ft_putstr.c \
		  ft_strlen.c \
		  ft_strcmp.c \
		  ft_swap.c

OBJS = $(SRCS:%.c=objs/%.o)

.PHONY: all clean fclean re

all: $(NAME)

objs/%.o: srcs/%.c
	mkdir -p objs
	gcc -Wall -Wextra -Werror -Iincludes -c $< -o $@

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
