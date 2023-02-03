HEADER = libft.h 

NAME = libft.a

FLAGS = -Wall -Wextra -Werror

SRC = ft_isascii.c \
	ft_memcpy.c \
	ft_strlcat.c \
	ft_bzero.c \
	ft_isdigit.c \
	ft_memmove.c \
	ft_strlcpy.c \
	ft_tolower.c \
	ft_calloc.c \
	ft_isprint.c \
	ft_memset.c \
	ft_strlen.c \
	ft_toupper.c \
	ft_isalnum.c \
	ft_memchr.c \
	ft_strchr.c \
	ft_strncmp.c \
	ft_isalpha.c \
	ft_memcmp.c \
	ft_strdup.c \
	ft_strnstr.c \
	ft_substr.c \
	ft_atoi.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_split.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_itoa.c \
	ft_putnbr_fd.c \
	ft_strmapi.c \
	ft_striteri.c \
	ft_strrchr.c \
	get_next_line.c

BONUS_SRC = ft_lstnew_bonus.c \


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