NAME_PROJECT = lp-team-15

SRCS = $(wildcard *.c)

OBJS = $(SRCS:.c=.o)

FLAGS = -Wall -Wextra -Werror
FLAGS_VALGRIND = --leak-check=full --show-leak-kinds=all --track-origins=yes

all: $(NAME_PROJECT)

.PHONY: all clean fclean re exec rv v


$(NAME_PROJECT): $(OBJS)

	@cc $(FLAGS) $(OBJS) -o $(NAME_PROJECT) -lm 
	@echo  "$(CYAN)Build ($(NAME_PROJECT)): $(GREEN)[Success]$(RESET)"

%.o: %.c
	@cc -c $< -o $@

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME_PROJECT) 
	@echo  "$(YELLOW)Cleaned $(CYAN)$(NAME_PROJECT): $(RED)[Success]$(RESET)"

re: fclean all

#Compila e executa o programa
exec:
	@make && clear && ./$(NAME_PROJECT)

#Recompila e executa o programa com o valgrind
rv:
	@make re && valgrind $(FLAGS_VALGRIND) ./$(NAME_PROJECT)

#Compila e executa o programa com o valgrind
v:
	@make && clear && valgrind $(FLAGS_VALGRIND) ./$(NAME_PROJECT)
	
GREEN = \033[1;32m
YELLOW = \033[1;33m
CYAN = \033[1;36m
RED	= \033[1;31m
RESET = \033[0m
