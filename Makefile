NAME = libftprintf.a
CFLAGS = -Wall -Wextra -Werror
INCLUDE = -I $(LIBFT_PATH)/libft.h -I ft_printf.h
SRCS = ft_printf.c ft_printf_put.c
OBJS = $(SRCS:.c=.o)
LIBFT_PATH = ./libft
LIBFT = libft.a

all: $(NAME)

$(NAME): $(OBJS)
	make -C $(LIBFT_PATH)
	cp $(LIBFT_PATH)/$(LIBFT) ./$@
	$(AR) rc $@ $^

.c.o: $(OBJS)
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

clean:
	make -C $(LIBFT_PATH) clean
	$(RM) $(OBJS) $(B_SRCS:.c=.o)

fclean: clean
	make -C $(LIBFT_PATH) fclean
	$(RM) $(NAME)

re: fclean all

test: $(NAME)
	$(CC) $(CFLAGS) $(INCLUDE) main.c $< && ./a.out

.PHONY: bonus clean fclean re all
