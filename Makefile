# Definições
NAME = libft.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra
AR = ar
ARFLAGS = rcs

# Lista de arquivos fonte
SRC = ft_isalpha.c \
      ft_isdigit.c \
      ft_isalnum.c \
      ft_isascii.c \
      ft_isprint.c \
      ft_strlen.c \
      ft_strlcpy.c \
      ft_toupper.c \
      ft_tolower.c \
      ft_strrchr.c \
      ft_strchr.c \
      ft_strncmp.c \
      ft_strnstr.c \
      ft_strlcat.c \
      ft_strdup.c \
      ft_memset.c \
      ft_memcpy.c \
      ft_memmove.c \
      ft_memchr.c \
      ft_memcmp.c \
      ft_atoi.c \
      ft_bzero.c \
      ft_calloc.c

# Criação da lista de arquivos objeto
OBJ = $(SRC:.c=.o)

# Alvo padrão
all: $(NAME)

# Criação da biblioteca
$(NAME): $(OBJ)
	$(AR) $(ARFLAGS) $@ $^

# Compilação dos arquivos objeto
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Limpeza dos arquivos gerados
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re