NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
FILES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c\
		ft_isprint.c ft_strlen.c

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