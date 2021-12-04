_RED	=	\033[31m
_GREAN	=	\033[32m
_YELLOW	=	\033[33m
_BLUE	=	\033[34m
_END	=	\033[0m

NAME		:= pushswap
HEADERPATH	:= ./include/libft.h
CC			:= gcc
GCC_OPTIONS	:= -Wall -Wextra -Werror
INCLUDE		:= include



LSRCS =	src/libft/ft_lastadd_front.c \
		src/libft/ft_lstadd_back.c \
		src/libft/ft_lstclear.c \
		src/libft/ft_lstdelone.c \
		src/libft/ft_lstiter.c \
		src/libft/ft_lstlast.c \
		src/libft/ft_lstmap.c \
		src/libft/ft_lstnew.c \
		src/libft/ft_lstsize.c \
		src/libft/ft_new_asslist.c \
		src/libft/ft_strlen.c \
		src/libft/ft_isint.c \
		src/libft/ft_strncmp.c \
		src/libft/ft_atoi.c

SRSC =	src/pushswap/main.c \
		src/pushswap/check_arg.c \
		src/pushswap/ft_swap_a.c \
		src/pushswap/ft_swap_b.c \
		src/pushswap/ft_push_a.c \
		src/pushswap/ft_push_b.c \
		src/pushswap/ft_rotate_a.c \
		src/pushswap/ft_rotate_b.c \
		src/pushswap/ft_riverse_rotate_a.c \
		src/pushswap/ft_riverse_rotate_b.c \
		src/pushswap/make_stack.c \
		src/pushswap/coordinate_compression.c \
		src/pushswap/ass_list_utils.c 

LOBJS:=	$(LSRCS:.c=.o)
OBJS := $(SRSC:.c=.o)

TEST =	src/pushswap/check_arg.c \
		src/pushswap/ft_swap_a.c \
		src/pushswap/ft_swap_b.c \
		src/pushswap/ft_push_a.c \
		src/pushswap/ft_push_b.c \
		src/pushswap/ft_rotate_a.c \
		src/pushswap/ft_rotate_b.c \
		src/pushswap/ft_riverse_rotate_a.c \
		src/pushswap/ft_riverse_rotate_b.c \
		src/pushswap/make_stack.c \
		test.c

TESTO := $(TEST:.c=.o)

all : libft $(NAME)

$(NAME): $(OBJS)
	$(CC)  $(GCC_OPTIONS) $(OBJS) -I./include -o $(NAME) -L. -lft

#-g -fsanitize=address

libft: $(LOBJS)
	ar -rcs libft.a $(LOBJS)
	@echo "\nFINISH Compiling libft.a!"
	@echo "$(_YELLOW)Now, you can use archieve file of libft.a, by\"-L. -lft\"$(_END)"

clean:
	@echo "Removing object files...."
	@rm -f $(LOBJS) $(OBJS) $(TESTO)

fclean:
	@echo "$(_RED)Removing object files and program....$(_END)"
	@rm	-f libft.a $(NAME) test
	@rm -f $(LOBJS) $(OBJS)

re: fclean all


test: $(TESTO)
	$(CC)  $(TESTO) -I./include -o test -L. -lft

%.o: %.c $(HEADERPATH)
	$(CC) -c $(GCC_OPTIONS) -o $@ $< -I./include
	@printf "$(_YELLOW)>$(_END)"


.PHONY: all clean fclean re bonus libft