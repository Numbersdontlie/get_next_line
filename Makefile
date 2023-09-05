NAME = getnextline.a

SRCS = get_next_line_utils.c get_next_line.c

OBJS = ${SRCS:.c=.o}

FLAGS = -Wall -Wextra -Werror

all: ${NAME}

${NAME}: ${OBJS}
		ar -rcs ${NAME} ${OBJS} get_next_line.h

%.o: %.c
		gcc $(FLAGS) -c $< -o $@

clean:
		rm -rf ${OBJS}
		rm -rf ./a.out

fclean: clean
		rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re

SRCSBNS = get_next_line_bonus.c get_next_line_utils_bonus.c

OBJSBNS = ${SRCSBNS:.c=.o}

bonus: $(OBJSBNS)
		ar rcs $(NAME) $(OBJSBNS) get_next_line_bonus.h