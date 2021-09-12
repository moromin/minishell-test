#include "../includes/minishell.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	const unsigned char	*p1;
	const unsigned char	*p2;
	int					i;

	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	if (s1 == NULL || s2 == NULL)
		return (0);
	i = 0;
	while (p1[i] == p2[i])
	{
		if (p1[i] == '\0' || p2[i] == '\0')
			return (0);
		i++;
	}
	return (p1[i] - p2[i]);
}
