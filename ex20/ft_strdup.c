#include <stdlib.h>

int		ft_strlen(char *str)
{
	int		i= 0;

	while(*str)
	{
		i++;
		str++;
	}
	return (i);
}

char	*ft_strdup(char *s)
{
	int			len;
	char		*dup;
	int			i;

	len = ft_strlen(s);
	dup = (char*) malloc(len + 1);
	i = 0;
	if (!dup)
		return (NULL);
	else
	{
		i = 0;
		while (s[i])
		{
			dup[i] = s[i];
			i++;
		}			
		dup[i] = '\0';
	}
	return (dup);
}
