HEAD = push_swap.h 
NAME = push_swap
LIBFT = libft/libft.a
HEAD_BONUS = checker.h 
NAME_BONUS = checker
FLAGS = -Wall -Wextra -Werror

SRCS = main.c parsing.c struct.c operations.c utils.c sub_operations.c ft_is_sorted.c  operations2.c  operations3.c alg_for_3.c \
		alg_for_4.c alg_for_5.c alg_main.c utils2.c
OBJS = $(SRCS:.c=.o)

SRCS_BONUS =  parsing_bonus.c struct_bonus.c operations_bonus.c utils_bonus.c sub_operations_bonus.c \
		ft_is_sorted_bonus.c  operations2_bonus.c  operations3_bonus.c ft_checker_bonus.c \
		main_checker_bonus.c utils2_bonus.c
OBJS_BONUS = $(SRCS_BONUS:.c=.o)

.PHONY: all bonus clean fclean re

all: $(NAME)

$(NAME): $(OBJS) $(HEAD) $(LIBFT)
		gcc -o push_swap $(OBJS) -L./libft -lft

$(LIBFT):
		$(MAKE) -C ./libft
		

%.o:	%.c $(HEAD)
			gcc $(FLAGS) -c $< -o $@

bonus: $(NAME_BONUS)

$(NAME_BONUS): $(OBJS_BONUS) $(HEAD_BONUS) $(LIBFT)
		gcc -o checker $(OBJS_BONUS) -L./libft -lft

%.o:	%.c $(HEAD_BONUS)
			gcc $(FLAGS) -c $< -o $@

clean:
	$(MAKE) clean -C ./libft
	rm -rf $(OBJS) $(OBJS_BONUS)

fclean: clean
	$(MAKE) fclean -C ./libft
	rm -rf $(NAME) $(NAME_BONUS)
	
re: fclean all

