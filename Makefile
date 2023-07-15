NAME	=	push_swap
CC		=	gcc
CFLAGS	=	-Wall -Werror -Wextra
SRCS	=	main.c \
			one.c \
			two.c \
			three.c \
			four.c \
			five.c \
			six.c \
			seven.c \

OBJS 	=	$(SRCS:.c=.o)

all		:	$(NAME)

$(NAME)	:	$(OBJS)
			$(CC) $(SRCS) $(CFLAGS) -o $(NAME)

clean	:
			rm $(OBJS)

fclean	:	clean
			rm -rf $(NAME)

re		:	fclean all

.PHONY: clean fclean re all
