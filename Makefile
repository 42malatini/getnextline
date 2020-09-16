NAME 			= get_next_line

CFLAGS 			= -Wall -Wextra -Werror
CC				= gcc
RM				= rm -f
FOLDER			= srcs
SRCS            = *.c
BONUS           = *_bonus.c
OBJ				= $(SRCS:.c=.o)
BONUS_OBJ		= $(BONUS:.c=.o)

all: 		$(NAME)

%.o: %.c
			$(CC) -c $(CFLAGS) -o $@

clean:
			$(RM) $(OBJ)

fclean:		clean
			$(NAME) $(NAME)

re:			fclean
			all

.PHONY: all clean fclean re bonus
