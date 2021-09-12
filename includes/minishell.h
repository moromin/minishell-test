#ifndef MINISHELL_H
# define MINISHELL_H

# include <stdio.h>
# include <stdlib.h>
# include <signal.h>
# include <unistd.h>
# include <readline/readline.h>
# include <readline/history.h>
# include "../libft/libft.h"

// signal.c
volatile sig_atomic_t	g_signal;
void	set_signal_handler(void);

// utils.c
int		ft_strcmp(const char *s1, const char *s2);

#endif
