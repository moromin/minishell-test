NAME		= minishell
SRC			=	main.c \
				signal.c \
				utils.c
SRCDIR		= sources
INCDIR		= ./includes
SRCS		= $(addprefix $(SRCDIR)/, $(SRC))
OBJS		= $(SRCS:%.c=%.o)
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
READLINE	= -lreadline -L/usr/local/opt/readline/lib -I/usr/local/opt/readline/include
LIBFT_PATH	= ./libft/

all: $(NAME)

$(NAME): $(OBJS)
	make -C $(LIBFT_PATH)
	$(CC) $(CFLAGS) $(OBJS) -L$(LIBFT_PATH) -lft -o $@ $(READLINE)

%.o: %.c
	$(CC) $(CFLAGS) -I$(INCDIR) -c $< -o $(<:.c=.o)

clean:
	make clean -C $(LIBFT_PATH)
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus $(NAME)
