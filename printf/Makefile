HEADER = ft_printf.h 

NAME = libftprintf.a

FLAGS = -Wall -Wextra -Werror

SRC = ft_intlen.c \
ft_putchar.c \
ft_putstr.c \
ft_putnbr.c \
ft_printf.c \
ft_hexlen.c \
ft_puthex.c \
ft_putptr.c


OBJ = ${SRC:.c=.o} 

%.o: %.c $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): ${OBJ} ${HEADER}
	ar -rcs $(NAME) ${OBJ}

all: ${NAME}

clean:
	rm -rf *.o

fclean: clean
	rm -rf ${NAME}

re: fclean all
	

.PHONY: all clean fclean re
