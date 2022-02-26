SRCS	= pipex.c utils.c main.c
OBJS	= ${SRCS:.c=.o}
LIBFT	= libft
NAME	= pipex
CC		= cc
RM		= rm -f
CFLAGS	= -Wall -Werror -Wextra
.c.o:
		${CC} ${FLAGS} -c $< -o ${<:.c=.o}
${NAME}:	${OBJS}
			@make -s -C $(LIBFT)
			@$(CC) $(OBJS) $(CFLAGS) -L $(LIBFT) -l ft -o $(NAME)

all:		${NAME}
norm:
	@norminette *
clean:
			@make -s clean -C $(LIBFT)
			${RM} ${OBJS} ${OBJS_B}
fclean:	clean
			@make -s fclean -C $(LIBFT)

			${RM} ${NAME}
re:			fclean all bonus
.PHONY: bonus all clean fclean re

