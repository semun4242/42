CC = gcc
CFLAG = -Wall -Wextra -Werror -c

TARGET = libft.a

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_strncmp.c ft_toupper.c ft_tolower.c

OBJ = $(SRC:.c=.o)

all: $(TARGET)

%.o : %.c
	$(CC) $(CFLAG) $< -o $@ -I /

$(TARGET) : $(OBJ)
	ar cr $(TARGET) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(TARGET)

re: fclean all