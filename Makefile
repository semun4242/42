CC = gcc
CFLAG = -Wall -Wextra -Werror -c

NAME = libft.a

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c \
		ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_strncmp.c ft_toupper.c \
		ft_tolower.c ft_strchr.c ft_strrchr.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_strdup.c \
		ft_calloc.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_atoi.c ft_itoa.c ft_strmapi.c \
		ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \

BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
		ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJ = $(SRC:.c=.o)

OBJ_B = $(BONUS:.c=.o)

ifdef WITH_BONUS
	OBJ_F = $(OBJ) $(OBJ_B)
else
	OBJ_F = $(OBJ)
endif

all: $(NAME)

bonus:
	@make WITH_BONUS=1 all

%.o: %.c
	$(CC) $(CFLAG) $< -o $@ -I /

$(NAME): $(OBJ_F)
	ar rcs $(NAME) $(OBJ_F)

clean:
	rm -rf $(OBJ) $(OBJ_B)

fclean: clean
	rm -rf $(NAME)

re:
	make fclean
	make all

.PHONY: all clean fclean re
