NAME = libftprintf.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror

GREEN = \\033[0;32m
YELLOW = \\033[0;33m
RED = \\033[0;31m
BLUE = \\033[0;34m
RESET = \\033[0m

SRCS = ft_printf.c ft_printf_utils.c

OBJS = $(SRCS:.c=.o)

INCLUDES = ft_printf.h

all : $(NAME)

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@echo "$(GREEN)Bibliothèque $(NAME) créée.$(RESET)"

%.o: %.c $(INCLUDES)
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "$(BLUE)Compilation de $<$(RESET)"

test: all $(SRCS)
	@$(CC) $(SRCS) main.c
	@echo "$(BLUE)Compilation du main$(RESET)"
	@echo "$(GREEN)a.out : $(RESET)"
	@./a.out

clean:
	@rm -f $(OBJS)
	@echo "$(YELLOW)Fichiers objets supprimés.$(RESET)"

fclean: clean
	@rm -f $(NAME) a.out
	@echo  "$(RED)Bibliothèque $(NAME), fichiers objets et a.out supprimés.$(RESET)"

re: fclean all

.PHONY: all clean fclean re