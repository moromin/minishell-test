#include "../includes/minishell.h"

static void	signal_handler(int signo)
{
	if (signo == SIGINT)
		printf("\n");
	rl_on_new_line();
	// rl_replace_line("", 0);
	rl_redisplay();
}

void	set_signal_handler(void)
{
	signal(SIGINT, &signal_handler);
	signal(SIGQUIT, &signal_handler);
}
