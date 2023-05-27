NAME = libftprintf.a
CFLAGS = -Wall -Wextra -Werror
INCLUDE = -I $(LIBFT_PATH)/libft.h -I ft_printf.h
SRCS = ft_printf.c
OBJS = $(SRCS:.c=.o)
LIBFT_PATH = ./libft

all: $(NAME)

$(NAME): $(OBJS)
	make -C $(LIBFT_PATH)
	$(AR) rc $@ $<

.c.o: $(OBJS)
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

clean:
	make -C $(LIBFT_PATH) clean
	$(RM) $(OBJS) $(B_SRCS:.c=.o)

fclean: clean
	make -C $(LIBFT_PATH) fclean
	$(RM) $(NAME)

re: fclean all

test: all
	$(CC) $(CFLAGS) $(INCLUDE) ft_printf.c $(LIBFT_PATH)/libft.a -o a.out

.PHONY: bonus clean fclean re all
