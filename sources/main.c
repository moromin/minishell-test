#include "../includes/minishell.h"

int	main(void)
{
	char	*line;

	set_signal_handler();
	line = NULL;
	while (1)
	{
		line = readline("minishell> ");
		if (ft_strcmp(line, "exit") == 0 || line == NULL)
		{
			free(line);
			break ;
		}
		printf("line is '%s'\n", line);
		add_history(line);
		free(line);
	}
	return (0);
}
