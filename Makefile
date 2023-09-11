NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
FILES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c\
		ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c\
		ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c\
		ft_toupper.c ft_tolower.c ft_strchr.c

OBJECTS = $(FILES:.c=.o)
BOBJECTS = ${BONUS:.c=.o}
FLAGS = -Wall -Wextra -Werror
all: $(NAME)
$(NAME): $(OBJECTS)
	@ar rcs $(NAME) $(OBJECTS)
$(OBJECTS): $(FILES)
	@gcc $(FLAGS) -c $(FILES)
clean:
	@rm -f $(OBJECTS)
fclean:
	@rm -f $(NAME) $(OBJECTS)
re: fclean all
.PHONY: re all fclean clean