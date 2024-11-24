CC			=	cc
CFLAGS		=	-Wall -Wextra -Werror
SRCS		=	srcs/do-op.c srcs/ft_atoi.c srcs/ft_strlen.c srcs/ft_putnbr.c srcs/ops.c
OBJS		=	${SRCS:.c=.o}
INCLUDES	=	./includes/
NAME		=	do-op

all			:	${NAME}

%.c			:	%.o
	$(CC) $(CFLAGS) -c $(SRCS) -I $(INCLUDES)

${NAME}		:	${OBJS}
	$(CC) $(CFLAGS) $(OBJS) -o ${NAME}

clean		:
	rm -rf ${OBJS}

fclean		:	clean
	rm -rf ${NAME}

re			:	fclean all

.PHONY		:	all clean fclean %.c