CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = run
INC  = ./libft.h
SRC = ./main.c ./ft_strlen.c ./ft_strncat.c ./ft_substr.c ./ft_lstnew.c ./ft_lstadd_front.c ./ft_lstsize.c ./ft_lstlast.c ./ft_lstdelone.c ./ft_lstclear.c
OBJ = ${SRC:.c=.o}

all : ${NAME}

.c.o :
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${INC}

${NAME} : ${OBJ}
	${CC} ${CFLAGS} -o $@ $^

clean :
	rm -rf ${OBJ}

fclean : clean
	rm -rf $(NAME)

re : fclean all
